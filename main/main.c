/*****************************************************************************
*
*
*
*****************************************************************************/
#include "s1c17702.h"
#include "system.h"
#include "port.h"
#include "lcd.h"
#include "grlib.h"

/****************************************************************************
*	prottype
*****************************************************************************/

/****************************************************************************
*	main function.
*	param:	none
*	return:	error code
*****************************************************************************/
int main(void)
{
	Reg_P2xMux.x7		= PORT_FUNC_0;	// P27 is port
	Reg_P2xOutEna.x7	= PORT_ENABLE;	// P27 output setting
	Reg_P2xOut.x7		= PORT_HIGH;	// initial High
	
	// clear screen
	GrRectFill(0, 0, 72, 32, 0, LOGIC_SET);
	
	// init lcd
	LcdInitPower();
	LcdClockEnable(LCD_CLKDIV_32);
	LcdDispOff();
	LcdInit(LCD_DUTY_32, LCD_CONTRAST_LV_10);
	LcdDispOn();
	
	LcdComRevOn();
	LcdSegRevOn();
	
	//GrRect(10, 10, 20, 10, 1, LOGIC_SET);
	//GrRect(15, 15, 20, 10, 1, LOGIC_SET);
	GrRect(0, 0, 72, 32, 1, LOGIC_SET);
	GrPutString(4, 10, "Hello,World", LOGIC_SET);
	GrRectFill(20, 8, 32, 16, 1, LOGIC_XOR);
	
	while(1){
		Wait(1000);//1[s]
		Reg_P2xOut.x7		= PORT_LOW;
		Wait(1000);//1[s]
		Reg_P2xOut.x7		= PORT_HIGH;
	}

	return 0;
}
