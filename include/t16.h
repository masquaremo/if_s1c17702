/*****************************************************************************
*	T16 Ch1 control driver
*
*
*****************************************************************************/
#ifndef __T16_H__
#define __T16_H__

/****************************************************************************
*	definition
*****************************************************************************/
// PCLK divide value
#define		T16_PDIV_1_1		0x0
#define		T16_PDIV_1_2		0x1
#define		T16_PDIV_1_4		0x2
#define		T16_PDIV_1_8		0x3
#define		T16_PDIV_1_16		0x4
#define		T16_PDIV_1_32		0x5
#define		T16_PDIV_1_64		0x6
#define		T16_PDIV_1_128		0x7
#define		T16_PDIV_1_256		0x8
#define		T16_PDIV_1_512		0x9
#define		T16_PDIV_1_1024		0xa
#define		T16_PDIV_1_2048		0xb
#define		T16_PDIV_1_4096		0xc
#define		T16_PDIV_1_8192		0xd
#define		T16_PDIV_1_16384	0xe

#define		T16_MODE_REPEAT		0
#define		T16_MODE_ONESHOT	1

/****************************************************************************
*	type definition
*****************************************************************************/
typedef struct{
	unsigned short	pclkDiv;
	unsigned short	reload;
	unsigned short	mode;
}T_T16_PARAM;

/****************************************************************************
*	macro definition
*****************************************************************************/
#define		t16Start0()			(*T16_CTL0 |= T16_CTL0_PRUN)
#define		t16Stop0()			(*T16_CTL0 &= ~T16_CTL0_PRUN)
#define		t16Reset0()			(*T16_CTL0 |= T16_CTL0_PRESER)
#define		t16IntEnable0()		(*T16_INT0 |= (T16_INT0_IE | T16_INT0_IF)) // with Int flag clear
#define		t16IntDisable0()	(*T16_INT0 &= ~T16_INT0_IE)
#define		t16ChkIntFlag0()	(*T16_INT0 & T16_INT0_IF)
#define		t16ClearIntFlag0()	(*T16_INT0 |= T16_INT0_IF)
#define		t16SetIntLevel0(a)	(*ITC_LV4 |= ((a << 8) & ITC_LV0_ILV9))

#define		t16Start1()			(*T16_CTL1 |= T16_CTL1_PRUN)
#define		t16Stop1()			(*T16_CTL1 &= ~T16_CTL1_PRUN)
#define		t16Reset1()			(*T16_CTL1 |= T16_CTL1_PRESER)
#define		t16IntEnable1()		(*T16_INT1 |= (T16_INT1_IE | T16_INT1_IF)) // with Int flag clear
#define		t16IntDisable1()	(*T16_INT1 &= ~T16_INT1_IE)
#define		t16ChkIntFlag1()	(*T16_INT1 & T16_INT1_IF)
#define		t16ClearIntFlag1()	(*T16_INT1 |= T16_INT1_IF)
#define		t16SetIntLevel1(a)	(*ITC_LV5 |= (a & ITC_LV0_ILV10)


/****************************************************************************
*	prototype
*****************************************************************************/
extern void t16Init0(T_T16_PARAM *param);
extern void t16Init1(T_T16_PARAM *param);


#endif // __T16_H__
