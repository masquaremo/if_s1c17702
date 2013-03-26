/*****************************************************************************
*	s1c17702 system timer
*
*
*****************************************************************************/
#include "s1c17702.h"
#include "system.h"
#include "t16.h"

/****************************************************************************
*	definition
*****************************************************************************/
#define		TIMER_ENTRY_MAX		4


/****************************************************************************
*	global variable
*****************************************************************************/
unsigned int	MsecCount;

/****************************************************************************
*	internal variable
*****************************************************************************/
static volatile T_TIMEOUT	gTimeout[TIMER_ENTRY_MAX];
static T_TIMEOUT dummy_entry;

/****************************************************************************
*	prototype
*****************************************************************************/
void t16Int0(void)__attribute__ ((interrupt_handler));


/****************************************************************************
*	timer start.
*	param:	none
*	return:	none
*****************************************************************************/
void SysTimerStart(void)
{
	T_T16_PARAM	param;
	int i;
	
	t16Stop0();
	
	MsecCount = 0;
	dummy_entry = 0;
	
	for(i=0; i<TIMER_ENTRY_MAX; i++){
		gTimeout[i] = 0;
	}
	
	param.pclkDiv = T16_PDIV_1_1;	// PCLK*1/1
	param.reload = 8000;	// 1ms order @ 8.0MHz
	param.mode = T16_MODE_REPEAT;
	
	t16Init0(&param);
	
	t16SetIntLevel0(3);
	t16IntEnable0();
	
	t16Reset0();
	t16Start0();
	
	return;
}


/****************************************************************************
*	timer set.
*	param:	timeout		in		timeout value.
*	return:	entry pointer
*****************************************************************************/
T_TIMEOUT *SetTimer(unsigned int timeout)
{
	int i;
	T_TIMEOUT *ret = &dummy_entry;
	
	for(i=0; i<TIMER_ENTRY_MAX; i++){
		if(gTimeout[i] == 0){
			gTimeout[i] = timeout;
			ret = (T_TIMEOUT *)&gTimeout[i];
			break;
		}
	}
	
	return ret;
}

/****************************************************************************
*	int handler
*	param:	none
*	return:	none
*****************************************************************************/
void t16Int0(void)
{
	int i;
	
	for(i=0; i<TIMER_ENTRY_MAX; i++){
		if(gTimeout[i]) gTimeout[i]--;
	}
	
	MsecCount++;
	
	t16ClearIntFlag0();
	
	return;
}

/****************************************************************************
*	Wait proc
*	param:	tim		in		wait value
*	return:	none
*****************************************************************************/
void Wait(unsigned int tim)
{
	volatile T_TIMEOUT *tout;
	
	tout = SetTimer(tim);
	while(*tout);
	
	return;
}
