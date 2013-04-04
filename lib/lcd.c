 /*****************************************************************************
*	s1c17702 LCD control driver
*
*
*****************************************************************************/
#include "system.h"
#include "s1c17702.h"
#include "lcd.h"

/****************************************************************************
*	definition
*****************************************************************************/

/****************************************************************************
*	macro definition
*****************************************************************************/

/****************************************************************************
*	prototype
*****************************************************************************/
void LcdInitPower(void);
void LcdClockEnable(unsigned char div);

/****************************************************************************
*	LCD power initialize
*	return:	none
*****************************************************************************/
void LcdInitPower(void)
{
	*LCD_PWR &= ~LCD_PWR_VDSEL;
	*LCD_PWR &= ~LCD_PWR_PBON;
	*LCD_VREG &= ~LCD_VREG_LHVLD;
}

/****************************************************************************
*	LCD clock enable
*	param:	div			in		clock division rate
*	return:	none
*****************************************************************************/
void LcdClockEnable(unsigned char div)
{
	// stop LCD clock
	LcdClockDisable();
	
	// set LCD clock. (HSCLK only)
	*OSC_LCLK = (div & OSC_LCLK_LCKDV) | OSC_LCLK_LCKEN;
	
	return;
}

/****************************************************************************
*	LCD initialize
*	param:	duty		in		display duty. 1:1/16  2:1/32.
*	param:	contrast	in		LCD contrast. 0x0 - 0xf
*	return:	none
*****************************************************************************/
void LcdInit(unsigned char duty, unsigned char contrast)
{
	// set LCD duty.
	*LCD_CCTL = duty;
	
	// Area0
	*LCD_DCTL &= ~LCD_DCTL_DSPAR;
	
	LcdComRevOff();
	LcdSegRevOff();
	
	LcdContrast(contrast);
	
	LcdReverseOff();
	
}
