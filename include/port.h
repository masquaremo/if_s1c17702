/*****************************************************************************
*	s1c17702 PORT control
*
*
*****************************************************************************/
#ifndef	__PORT_H__
#define	__PORT_H__

/****************************************************************************
*	definition
*****************************************************************************/
#define		PORT_FUNC_0			0
#define		PORT_FUNC_1			1

#define		PORT_DISABLE		0
#define		PORT_ENABLE			1

#define		PORT_LOW			0
#define		PORT_HIGH			1

struct _port{
	unsigned int	x0			:1;
	unsigned int	x1			:1;
	unsigned int	x2			:1;
	unsigned int	x3			:1;
	unsigned int	x4			:1;
	unsigned int	x5			:1;
	unsigned int	x6			:1;
	unsigned int	x7			:1;
};

/*****************************************************************************
	P(port) 	(0x5200)
*****************************************************************************/
#define		Reg_P0xIn		(*(volatile struct _port *)0x5200)	// P0 Port Input Data Register
#define		Reg_P0xOut		(*(volatile struct _port *)0x5201)	// P0 Port Output Data Register
#define		Reg_P0xOutEna	(*(volatile struct _port *)0x5202)	// P0 Port Output Enable Register
#define		Reg_P0xPullUp	(*(volatile struct _port *)0x5203)	// P0 Port Pull-up Control Register
#define		Reg_P0xSmTrig	(*(volatile struct _port *)0x5204)	// P0 Port Schmitt Trigger Control Register
#define		Reg_P0xIntMask	(*(volatile struct _port *)0x5205)	// P0 Port Interrupt Mask Register
#define		Reg_P0xEdge		(*(volatile struct _port *)0x5206)	// P0 Port Interrupt Edge Select Register
#define		Reg_P0xIntFlag	(*(volatile struct _port *)0x5207)	// P0 Port Interrupt Flag Register
#define		Reg_P0xChat		(*(volatile struct _port *)0x5208)	// P0 Port Chattering Filter Control Register
#define		Reg_P0xKeyReset	(*(volatile struct _port *)0x5209)	// P0 Port Key-Entry Reset Configuration Register
#define		Reg_P0xInEna	(*(volatile struct _port *)0x520a)	// P0 Port Input Enable Register

#define		Reg_P1xIn		(*(volatile struct _port *)0x5210)	// P1 Port Input Data Register
#define		Reg_P1xOut		(*(volatile struct _port *)0x5211)	// P1 Port Output Data Register
#define		Reg_P1xOutEna	(*(volatile struct _port *)0x5212)	// P1 Port Output Enable Register
#define		Reg_P1xPullUp	(*(volatile struct _port *)0x5213)	// P1 Port Pull-up Control Register
#define		Reg_P1xSmTrig	(*(volatile struct _port *)0x5214)	// P1 Port Schmitt Trigger Control Register
#define		Reg_P1xIntMask	(*(volatile struct _port *)0x5215)	// P1 Port Interrupt Mask Register
#define		Reg_P1xEdge		(*(volatile struct _port *)0x5216)	// P1 Port Interrupt Edge Select Register
#define		Reg_P1xIntFlag	(*(volatile struct _port *)0x5217)	// P1 Port Interrupt Flag Register
#define		Reg_P1xChat		(*(volatile struct _port *)0x5218)	// P1 Port Chattering Filter Control Register
#define		Reg_P1xInEna	(*(volatile struct _port *)0x521a)	// P1 Port Input Enable Register

#define		Reg_P2xIn		(*(volatile struct _port *)0x5220)	// P2 Port Input Data Register
#define		Reg_P2xOut		(*(volatile struct _port *)0x5221)	// P2 Port Output Data Register
#define		Reg_P2xOutEna	(*(volatile struct _port *)0x5222)	// P2 Port Output Enable Register
#define		Reg_P2xPullUp	(*(volatile struct _port *)0x5223)	// P2 Port Pull-up Control Register
#define		Reg_P2xSmTrig	(*(volatile struct _port *)0x5224)	// P2 Port Schmitt Trigger Control Register
#define		Reg_P2xInEna	(*(volatile struct _port *)0x522a)	// P2 Port Input Enable Register

#define		Reg_P3xIn		(*(volatile struct _port *)0x5230)	// P3 Port Input Data Register
#define		Reg_P3xOut		(*(volatile struct _port *)0x5231)	// P3 Port Output Data Register
#define		Reg_P3xOutEna	(*(volatile struct _port *)0x5232)	// P3 Port Output Enable Register
#define		Reg_P3xPullUp	(*(volatile struct _port *)0x5233)	// P3 Port Pull-up Control Register
#define		Reg_P3xSmTrig	(*(volatile struct _port *)0x5234)	// P3 Port Schmitt Trigger Control Register
#define		Reg_P3xInEna	(*(volatile struct _port *)0x523a)	// P3 Port Input Enable Register

/*****************************************************************************
	P(mux)		(0x52a0)
*****************************************************************************/
#define		Reg_P0xMux		(*(volatile struct _port *)0x52a0)	// P0 Port Function Select Register
#define		Reg_P1xMux		(*(volatile struct _port *)0x52a1)	// P1 Port Function Select Register
#define		Reg_P2xMux		(*(volatile struct _port *)0x52a2)	// P2 Port Function Select Register
#define		Reg_P3xMux		(*(volatile struct _port *)0x52a3)	// P3 Port Function Select Register

#endif /* __PORT_H__*/
