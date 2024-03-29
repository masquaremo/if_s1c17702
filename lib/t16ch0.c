/*****************************************************************************
*	T16 Ch0 control driver
*
*
*****************************************************************************/
#include "s1c17702.h"
#include "t16.h"

/****************************************************************************
*	prototype
*****************************************************************************/
void t16Init0(T_T16_PARAM *param);


/****************************************************************************
*	Initialize process.
*	param:	param	in	initialize parameter
*	return:	none
*****************************************************************************/
void t16Init0(T_T16_PARAM *param)
{
	t16Stop0();
	t16IntDisable0();
	
	*T16_CLK0 = (param->pclkDiv & T16_CLK0_DF);
	*T16_TR0 = (param->reload);
	if(param->mode){
		*T16_CTL0 |= T16_CTL0_TRMD;
	}
	else{
		*T16_CTL0 &= ~T16_CTL0_TRMD;
	}
	
	return;
}
