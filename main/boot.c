/*****************************************************************************
*	system boot
*
*
*****************************************************************************/
#include "s1c17702.h"
#include "system.h"

/****************************************************************************
*	Interrupt handler (with external module)
*****************************************************************************/
void ReserveInt(void)__attribute__ ((interrupt_handler));
void Nmi(void)__attribute__ ((interrupt_handler));

extern void t16Int0(void)__attribute__ ((interrupt_handler));;

/****************************************************************************
*	prototype
*****************************************************************************/
void Boot(void);
static void SetClock(void);
static void BssClear(void);
static void DataCopy(void);
extern int main(void);

/****************************************************************************
*	external valiable
*****************************************************************************/
extern unsigned long __START_bss;
extern unsigned long __END_bss;
extern unsigned long __START_data;
extern unsigned long __START_data_lma;
extern unsigned long __END_data;
extern void emu_copro_process(void);

/****************************************************************************
*	Vector table
*****************************************************************************/
void (* const vector[])(void) =
{						// No	Add		IntName
	Boot,				// 0	00		Reset
	ReserveInt,			// 1	04		Illigal address
	Nmi,				// 2	08		NMI
	emu_copro_process,	// 3	0c		Reserved
	ReserveInt,			// 4	10		P0
	ReserveInt,			// 5	14		P1
	ReserveInt,			// 6	18		SWT
	ReserveInt,			// 7	1c		CT
	ReserveInt,			// 8	20		T8OSC1
	ReserveInt,			// 9	24		SVD
	ReserveInt,			// 10	28		LCD
	ReserveInt,			// 11	2c		T16E Ch0
	ReserveInt,			// 12	30		T8F Ch0,Ch1
	t16Int0,			// 13	34		T16 Ch0
	ReserveInt,			// 14	38		T16 Ch1
	ReserveInt,			// 15	3c		T16 Ch2
	ReserveInt,			// 16	40		UART Ch0
	ReserveInt,			// 17	44		UART Ch1
	ReserveInt,			// 18	48		SPI
	ReserveInt,			// 19	4c		I2C
	ReserveInt,			// 20	50		REMC
	ReserveInt,			// 21	54		T16E Ch1
	ReserveInt,			// 22	58		Reserved
	ReserveInt,			// 23	5c		Reserved
	ReserveInt,			// 24	60		Reserved
	ReserveInt,			// 25	64		Reserved
	ReserveInt,			// 26	68		Reserved
	ReserveInt,			// 27	6c		Reserved
	ReserveInt,			// 28	70		Reserved
	ReserveInt,			// 29	74		Reserved
	ReserveInt,			// 30	78		Reserved
	0,					// 31	7c		Reserved
};

/****************************************************************************
*	Boot.
*	param:	none
*	return:	none
*****************************************************************************/
void Boot(void)
{
	// set Stack Pointer
//	asm("xld.a  %sp, 0x2fc0");
	asm("xld.a  %sp, 0xfc0");

	// .bss clear and copy .data section
	BssClear();
	DataCopy();

	SetClock();
	
	// int enable
	asm("ei");

	// init system timer
	SysTimerStart();

	// call main routine
	main();

	asm("di");
	while(1){
		asm("halt");
	}
}

/****************************************************************************
*	set clock
*	param:	none
*	return:	none
*****************************************************************************/
static void SetClock(void)
{
	// Prescaler start
	*PSC_CTL = (PSC_CTL_PRUND | PSC_CTL_PRUN);

	// CLG ON
	*CLG_CCLK = 0; // clock gear 1/1
	*CLG_PCLK = CLG_PCLK_PCKEN; // clg enable
	// memory access timing set
	*MISC_FL = 0x0004; // SRAMC 2cyc, FLASHC 1cyc

	// clock select
	*OSC_CTL = 0x02 | OSC_CTL_OSC3EN;// osc3 enable, wait 2
	*OSC_SRC = OSC_SRC_HSCLKSEL;// select osc3
	*OSC_CTL &= ~OSC_CTL_IOSCEN;// iosc disable

	// lcd clock enable
	//*OSC_LCLK = OSC_LCLK_LCKEN;
}

/****************************************************************************
*	clear .bss section
*	param:	none
*	return:	none
*****************************************************************************/
static void BssClear(void)
{
	unsigned char *addr;
	unsigned long size;
	unsigned long i;

	addr = (unsigned char *)&__START_bss;
	size = ((unsigned long)&__END_bss) - ((unsigned long)&__START_bss);

	for(i=0; i<size; i++){
		*addr++ = 0;
	}

	return;
}

/****************************************************************************
*	copy .data section LMA to VMA
*	param:	none
*	return:	none
*****************************************************************************/
static void DataCopy(void)
{
	unsigned char *src;
	unsigned char *dst;
	unsigned long size;
	unsigned long i;

	src = (unsigned char *)&__START_data_lma;
	dst = (unsigned char *)&__START_data;
	size = ((unsigned long)&__END_data) - ((unsigned long)&__START_data);

	for(i=0; i<size; i++){
		*dst = *src;
		dst++;
		src++;
	}

	return;
}

/****************************************************************************
*	Reserve Interrupt routine.
*	param:	none
*	return:	none
*****************************************************************************/
void ReserveInt(void)
{
	while(1){
		asm("halt");
	}
}

/****************************************************************************
*	Non Maskable Interrupt routine.
*	param:	none
*	return:	none
*****************************************************************************/
void Nmi(void)
{
	while(1){
		asm("halt");
	}
}

