/*****************************************************************************
*	s1c17702 LCD control driver and graphic lib.
*
*
*****************************************************************************/
#ifndef	__LCD_H__
#define	__LCD_H__

/****************************************************************************
*	definition
*****************************************************************************/
// clock division rate
#define		LCD_CLKDIV_32		0x00
#define		LCD_CLKDIV_64		0x04
#define		LCD_CLKDIV_128		0x08
#define		LCD_CLKDIV_256		0x0C
#define		LCD_CLKDIV_512		0x10

#define		LCD_DUTY_16			1		// LCD duty. 1/16
#define		LCD_DUTY_32			2		// LCD duty. 1/32

#define		LCD_CONTRAST_LV_0	0x0		// LCD contrast. LV.0 (the lightest)
#define		LCD_CONTRAST_LV_1	0x1		// LCD contrast. LV.1
#define		LCD_CONTRAST_LV_2	0x2		// LCD contrast. LV.2
#define		LCD_CONTRAST_LV_3	0x3		// LCD contrast. LV.3
#define		LCD_CONTRAST_LV_4	0x4		// LCD contrast. LV.4
#define		LCD_CONTRAST_LV_5	0x5		// LCD contrast. LV.5
#define		LCD_CONTRAST_LV_6	0x6		// LCD contrast. LV.6
#define		LCD_CONTRAST_LV_7	0x7		// LCD contrast. LV.7
#define		LCD_CONTRAST_LV_8	0x8		// LCD contrast. LV.8
#define		LCD_CONTRAST_LV_9	0x9		// LCD contrast. LV.9
#define		LCD_CONTRAST_LV_10	0xa		// LCD contrast. LV.10
#define		LCD_CONTRAST_LV_11	0xb		// LCD contrast. LV.11
#define		LCD_CONTRAST_LV_12	0xc		// LCD contrast. LV.12
#define		LCD_CONTRAST_LV_13	0xd		// LCD contrast. LV.13
#define		LCD_CONTRAST_LV_14	0xe		// LCD contrast. LV.14
#define		LCD_CONTRAST_LV_15	0xf		// LCD contrast. LV.15 (the darkest)

// LCD panel size
#define		XPOS_MAX			72
#define		YPOS_MAX			32

// VRAM information
#define		VRAM				0x80000
#define		LINE_OFFSET			0x100

/****************************************************************************
*	macro definition
*****************************************************************************/
#define		LcdContrast(n)		(*LCD_CADJ = (n & LCD_CADJ_LC))
#define		LcdDispOn()			(*LCD_DCTL |= 0x01)
#define		LcdDispOff()		(*LCD_DCTL &= 0xFC)
#define		LcdDispAllOn()		(*LCD_DCTL |= 0x02)
#define		LcdDispAllOff()		(*LCD_DCTL |= 0x03)
#define		LcdReverseOn()		(*LCD_DCTL &= ~LCD_DCTL_DSPREV)
#define		LcdReverseOff()		(*LCD_DCTL |= LCD_DCTL_DSPREV)
#define		LcdComRevOn()		(*LCD_DCTL &= ~LCD_DCTL_COMREV)
#define		LcdComRevOff()		(*LCD_DCTL |= LCD_DCTL_COMREV)
#define		LcdSegRevOn()		(*LCD_DCTL &= ~LCD_DCTL_SEGREV)
#define		LcdSegRevOff()		(*LCD_DCTL |= LCD_DCTL_SEGREV)
#define		LcdClockDisable()	(*OSC_LCLK = 0)

/****************************************************************************
*	prototype
*****************************************************************************/
extern void LcdInitPower(void);
extern void LcdClockEnable(unsigned char div);
extern void LcdInit(unsigned char duty, unsigned char contrast);

#endif	// __LCD_H__
