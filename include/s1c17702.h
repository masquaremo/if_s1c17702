/*****************************************************************************
*	s1c17702 I/O Register map definition
*
*
*****************************************************************************/
#ifndef _S1C17702_H_
#define _S1C17702_H_

/*****************************************************************************
	 Prescaler	(0x4020)
*****************************************************************************/
// Prescaler Control Register
#define		PSC_CTL			((volatile unsigned char *)0x4020)

	#define	PSC_CTL_PRUND		0x02	// Prescaler run/stop in debug mode
	#define	PSC_CTL_PRUN		0x01	// Prescaler run/stop control


/*****************************************************************************
	 UART		(0x4100)
*****************************************************************************/
// UART Ch.0 Status Register
#define		UART_ST0		((volatile unsigned char *)0x4100)

	#define	UART_ST0_FER		0x40	// Framing error flag
	#define	UART_ST0_PER		0x20	// Parity error flag
	#define	UART_ST0_OER		0x10	// Overrun error flag
	#define	UART_ST0_RD2B		0x08	// Second byte receive flag
	#define	UART_ST0_TRBS		0x04	// Transmit busy flag
	#define	UART_ST0_RDRY		0x02	// Receive data ready flag
	#define	UART_ST0_TDBE		0x01	// Transmit data buffer empty flag


// UART Ch.0 Transmit Data Register
#define		UART_TXD0		((volatile unsigned char *)0x4101)

	#define	UART_TXD0_TXD		0xFF	// Transmit data

// UART Ch.0 Receive Data Register
#define		UART_RXD0		((volatile unsigned char *)0x4102)

	#define	UART_RXD0_RXD		0xFF	// Receive data in the receive data buffer

// UART Ch.0 Mode Register
#define		UART_MOD0		((volatile unsigned char *)0x4103)

	#define	UART_MOD0_CHLN		0x10	// Character length
	#define	UART_MOD0_PREN		0x08	// Parity enable
	#define	UART_MOD0_PMD		0x04	// Parity mode select
	#define	UART_MOD0_STPB		0x02	// Stop bit select
	#define	UART_MOD0_SSCK		0x01	// Input clock select


// UART Ch.0 Control Register
#define		UART_CTL0		((volatile unsigned char *)0x4104)

	#define	UART_CTL0_REIEN		0x40	// Receive error int. enable
	#define	UART_CTL0_RIEN		0x20	// Receive buffer full int. enable
	#define	UART_CTL0_TIEN		0x10	// Transmit buffer empty int. enable
	#define	UART_CTL0_RBFI		0x02	// Receive buffer full int. condition
	#define	UART_CTL0_RXEN		0x01	// UART enable


// UART Ch.0 Expansion Register
#define		UART_EXP0		((volatile unsigned char *)0x4105)

	#define	UART_EXP0_IRCLK		0x70	// IrDA receive detection clock select
	#define	UART_EXP0_IRMD		0x01	// IrDA mode select

// UART Ch.1 Status Register
#define		UART_ST1		((volatile unsigned char *)0x4120)

	#define	UART_ST1_FER		0x40	// Framing error flag
	#define	UART_ST1_PER		0x20	// Parity error flag
	#define	UART_ST1_OER		0x10	// Overrun error flag
	#define	UART_ST1_RD2B		0x08	// Second byte receive flag
	#define	UART_ST1_TRBS		0x04	// Transmit busy flag
	#define	UART_ST1_RDRY		0x02	// Receive data ready flag
	#define	UART_ST1_TDBE		0x01	// Transmit data buffer empty flag

// UART Ch.1 Transmit Data Register
#define		UART_TXD1		((volatile unsigned char *)0x4121)

	#define	UART_TXD1_TXD		0xFF	// Transmit data

// UART Ch.1 Receive Data Register
#define		UART_RXD1		((volatile unsigned char *)0x4122)

	#define	UART_RXD1_RXD		0xFF	// Receive data in the receive data buffer

// UART Ch.1 Mode Register
#define		UART_MOD1		((volatile unsigned char *)0x4123)

	#define	UART_MOD1_CHLN		0x10	// Character length
	#define	UART_MOD1_PREN		0x08	// Parity enable
	#define	UART_MOD1_PMD		0x04	// Parity mode select
	#define	UART_MOD1_STPB		0x02	// Stop bit select
	#define	UART_MOD1_SSCK		0x01	// Input clock select

// UART Ch.1 Control Register
#define		UART_CTL1		((volatile unsigned char *)0x4124)

	#define	UART_CTL1_REIEN		0x40	// Receive error int. enable
	#define	UART_CTL1_RIEN		0x20	// Receive buffer full int. enable
	#define	UART_CTL1_TIEN		0x10	// Transmit buffer empty int. enable
	#define	UART_CTL1_RBFI		0x02	// Receive buffer full int. condition
	#define	UART_CTL1_RXEN		0x01	// UART enable

// UART Ch.1 Expansion Register
#define		UART_EXP1		((volatile unsigned char *)0x4125)

	#define	UART_EXP1_IRCLK		0x70	// IrDA receive detection clock select
	#define	UART_EXP1_IRMD		0x01	// IrDA mode select


/*****************************************************************************
	 T8F Ch0	(0x4200)
*****************************************************************************/
// 8-bit Timer Ch.0 Input Clock Select Register
#define		T8F_CLK0		((volatile unsigned short *)0x4200)

	#define	T8F_CLK0_DF			0x000F	// 8-bit timer input clock select

// 8-bit Timer Ch.0 Reload Data Register
#define		T8F_TR0			((volatile unsigned short *)0x4202)

	#define	T8F_TR0_TR			0x00FF	// 8-bit timer reload data

// 8-bit Timer Ch.0 Counter Data Register
#define		T8F_TC0			((volatile unsigned short *)0x4204)

	#define	T8F_TC0_TC			0x00FF	// 8-bit timer counter data

// 8-bit Timer Ch.0 Control Register
#define		T8F_CTL0		((volatile unsigned short *)0x4206)

	#define	T8F_CTL0_TFMD		0x0F00	// Fine mode setup
	#define	T8F_CTL0_TRMD		0x0010	// Count mode select
	#define	T8F_CTL0_PRESER		0x0002	// Timer reset
	#define	T8F_CTL0_PRUN		0x0001	// Timer run/stop control

// 8-bit Timer Ch.0 Interrupt Control Register
#define		T8F_INT0		((volatile unsigned short *)0x4208)

	#define	T8F_INT0_T8IE		0x0100	// 8-bit timer interrupt enable 
	#define	T8F_INT0_T8IF		0x0001	// 8-bit timer interrupt flag


/*****************************************************************************
	 T16 Ch0	(0x4220)
*****************************************************************************/
// 16-bit Timer Ch.0 Input Clock Select Register
#define		T16_CLK0		((volatile unsigned short *)0x4220)

	#define	T16_CLK0_DF			0x000F	// Timer input clock select

// 16-bit Timer Ch.0 Reload Data Register
#define		T16_TR0			((volatile unsigned short *)0x4222)

	#define	T16_TR0_TR			0xFFFF	// 16-bit timer reload data

// 16-bit Timer Ch.0 Counter Data Register
#define		T16_TC0			((volatile unsigned short *)0x4224)

	#define	T16_TC0_TC			0xFFFF	// 16-bit timer counter data

// 16-bit Timer Ch.0 Control Register
#define		T16_CTL0		((volatile unsigned short *)0x4226)

	#define	T16_CTL0_CKACTV		0x0400	// External clock active level select
	#define	T16_CTL0_CKSL		0x0300	// Input clock and pulse width measurement mode select
	#define	T16_CTL0_TRMD		0x0010	// Count mode select
	#define	T16_CTL0_PRESER		0x0002	// Timer reset
	#define	T16_CTL0_PRUN		0x0001	// Timer run/stop control

// 16-bit Timer Ch.0 Interrupt Control Register
#define		T16_INT0		((volatile unsigned short *)0x4228)

	#define	T16_INT0_IE			0x0100	// 16-bit timer interrupt enable
	#define	T16_INT0_IF			0x0001	// 16-bit timer interrupt flag


/*****************************************************************************
	 T16 Ch1	(0x4240)
*****************************************************************************/
// 16-bit Timer Ch.1 Input Clock Select Register
#define		T16_CLK1		((volatile unsigned short *)0x4240)

	#define	T16_CLK1_DF			0x000F	// Timer input clock select

// 16-bit Timer Ch.1 Reload Data Register
#define		T16_TR1			((volatile unsigned short *)0x4242)

	#define	T16_TR1_TR			0xFFFF	// 16-bit timer reload data

// 16-bit Timer Ch.1 Counter Data Register
#define		T16_TC1			((volatile unsigned short *)0x4244)

	#define	T16_TC1_TC			0xFFFF	// 16-bit timer counter data

// 16-bit Timer Ch.1 Control Register
#define		T16_CTL1		((volatile unsigned short *)0x4246)

	#define	T16_CTL1_CKACTV		0x0400	// External clock active level select  
	#define	T16_CTL1_CKSL		0x0300	// Input clock and pulse width measurement mode select
	#define	T16_CTL1_TRMD		0x0010	// Count mode select
	#define	T16_CTL1_PRESER		0x0002	// Timer reset
	#define	T16_CTL1_PRUN		0x0001	// Timer run/stop control

// 16-bit Timer Ch.1 Interrupt Control Register
#define		T16_INT1		((volatile unsigned short *)0x4248)

	#define	T16_INT1_IE			0x0100	// 16-bit timer interrupt enable
	#define	T16_INT1_IF			0x0001	// 16-bit timer interrupt flag


/*****************************************************************************
	 T16 Ch2	(0x4260)
*****************************************************************************/
// 16-bit Timer Ch.2 Input Clock Select Register
#define		T16_CLK2		((volatile unsigned short *)0x4260)

	#define	T16_CLK2_DF			0x000F	// Timer input clock select

// 16-bit Timer Ch.2 Reload Data Register
#define		T16_TR2			((volatile unsigned short *)0x4262)

	#define	T16_TR2_TR			0xFFFF	// 16-bit timer reload data

// 16-bit Timer Ch.2 Counter Data Register
#define		T16_TC2			((volatile unsigned short *)0x4264)

	#define	T16_TC2_TC			0xFFFF	// 16-bit timer counter data

// 16-bit Timer Ch.2 Control Register
#define		T16_CTL2		((volatile unsigned short *)0x4266)

	#define	T16_CTL2_CKACTV		0x0400	// External clock active level select  
	#define	T16_CTL2_CKSL		0x0300	// Input clock and pulse width measurement mode select
	#define	T16_CTL2_TRMD		0x0010	// Count mode select
	#define	T16_CTL2_PRESER		0x0002	// Timer reset
	#define	T16_CTL2_PRUN		0x0001	// Timer run/stop control

// 16-bit Timer Ch.2 Interrupt Control Register
#define		T16_INT2		((volatile unsigned short *)0x4268)

	#define	T16_INT2_IE			0x0100	// 16-bit timer interrupt enable
	#define	T16_INT2_IF			0x0001	// 16-bit timer interrupt flag


/*****************************************************************************
	 T8F Ch1	(0x4280)
*****************************************************************************/
// 8-bit Timer Ch.1 Input Clock Select Register
#define		T8F_CLK1		((volatile unsigned short *)0x4280)

	#define	T8F_CLK1_DF			0x000F	// 8-bit timer input clock select

// 8-bit Timer Ch.1 Reload Data Register
#define		T8F_TR1			((volatile unsigned short *)0x4282)

	#define	T8F_TR1_TR			0x00FF	// 8-bit timer input clock select

// 8-bit Timer Ch.1 Counter Data Register
#define		T8F_TC1			((volatile unsigned short *)0x4284)

	#define	T8F_TC1_TC			0x00FF	// 8-bit timer counter data

// 8-bit Timer Ch.1 Control Register
#define		T8F_CTL1		((volatile unsigned short *)0x4286)

	#define	T8F_CTL1_TFMD		0x0F00	// Fine mode setup
	#define	T8F_CTL1_TRMD		0x0010	// Count mode select
	#define	T8F_CTL1_PRESER		0x0002	// Timer reset
	#define	T8F_CTL1_PRUN		0x0001	// Timer run/stop control

// 8-bit Timer Ch.1 Interrupt Control Register
#define		T8F_INT1		((volatile unsigned short *)0x4288)

	#define	T8F_INT1_T8IE		0x0100	// 8-bit timer interrupt enable
	#define	T8F_INT1_T8IF		0x0001	// 8-bit timer interrupt flag 


/*****************************************************************************
	 ITC		(0x4300)
*****************************************************************************/
// Interrupt Level Setup Register 0
#define		ITC_LV0				((volatile unsigned short *)0x4306)

	#define	ITC_LV0_ILV1		0x0700	// P1 interrupt level
	#define	ITC_LV0_ILV0		0x0007	// P0 interrupt level

// Interrupt Level Setup Register 1
#define		ITC_LV1				((volatile unsigned short *)0x4308)

	#define	ITC_LV0_ILV3		0x0700	// CT interrupt level
	#define	ITC_LV0_ILV2		0x0007	// SWT interrupt level

// Interrupt Level Setup Register 2
#define		ITC_LV2				((volatile unsigned short *)0x430a)

	#define	ITC_LV0_ILV5		0x0700	// SVD interrupt level
	#define	ITC_LV0_ILV4		0x0007	// T8OSC1 interrupt level

// Interrupt Level Setup Register 3
#define		ITC_LV3				((volatile unsigned short *)0x430c)

	#define	ITC_LV0_ILV7		0x0700	// T16E Ch.0 interrupt level
	#define	ITC_LV0_ILV6		0x0007	// LCD interrupt level

// Interrupt Level Setup Register 4
#define		ITC_LV4				((volatile unsigned short *)0x430e)

	#define	ITC_LV0_ILV9		0x0700	// T16 Ch.0 interrupt level
	#define	ITC_LV0_ILV8		0x0007	// T8F  interrupt level

// Interrupt Level Setup Register 5
#define		ITC_LV5				((volatile unsigned short *)0x4310)

	#define	ITC_LV0_ILV11		0x0700	// T16 Ch.2 interrupt level
	#define	ITC_LV0_ILV10		0x0007	// T16 Ch.1 interrupt level

// Interrupt Level Setup Register 6
#define		ITC_LV6				((volatile unsigned short *)0x4312)

	#define	ITC_LV0_ILV13		0x0700	// UART Ch.1 interrupt level
	#define	ITC_LV0_ILV12		0x0007	// UART Ch.0 interrupt level

// Interrupt Level Setup Register 7
#define		ITC_LV7				((volatile unsigned short *)0x4314)

	#define	ITC_LV0_ILV15		0x0700	// I2C interrupt level
	#define	ITC_LV0_ILV14		0x0007	// SPI interrupt level

// Interrupt Level Setup Register 8
#define		ITC_LV8				((volatile unsigned short *)0x4316)

	#define	ITC_LV0_ILV17		0x0700	// T16E Ch.1 interrupt level
	#define	ITC_LV0_ILV16		0x0007	// REMC interrupt level


/*****************************************************************************
	 SPI		(0x4320)
*****************************************************************************/
// SPI Status Register
#define		SPI_ST				((volatile unsigned short *)0x4320)

	#define	SPI_ST_SPBSY		0x0004	// Transfer busy flag (master)/ss signal low flag (slave) 
	#define	SPI_ST_SPRBF		0x0002	// Receive data buffer full flag 1
	#define	SPI_ST_SPTBE		0x0001	// Transmit data buffer empty flag

// SPI Transmit Data Register
#define		SPI_TXD				((volatile unsigned short *)0x4322)

	#define	SPI_TXD_SPTDB		0x00FF	// SPI transmit data buffer

// SPI Receive Data Register
#define		SPI_RXD				((volatile unsigned short *)0x4324)

	#define	SPI_RXD_SPRDB		0x00FF	// SPI receive data buffer

// SPI Control Register
#define		SPI_CTL				((volatile unsigned short *)0x4326)

	#define	SPI_CTL_MCLK		0x0200	// SPI clock source select
	#define	SPI_CTL_MLSB		0x0100	// LSB/MSB first mode select
	#define	SPI_CTL_SPRIE		0x0020	// Receive data buffer full int. enable
	#define	SPI_CTL_SPTIE		0x0010	// Transmit data buffer empty int. enable
	#define	SPI_CTL_CPHA		0x0008	// Clock phase select
	#define	SPI_CTL_CPOL		0x0004	// Clock polarity select
	#define	SPI_CTL_MSSL		0x0002	// Master/slave mode select
	#define	SPI_CTL_SPEN		0x0001	// SPI enable


/*****************************************************************************
	 I2C		(0x4340)
*****************************************************************************/
// I2C Enable Register
#define		I2C_EN				((volatile unsigned short *)0x4340)

	#define	I2C_EN_I2CEN		0x0001	// I2C enable

// I2C Control Register
#define		I2C_CTL				((volatile unsigned short *)0x4342)

	#define	I2C_CTL_RBUSY		0x0200	// Receive busy flag
	#define	I2C_CTL_TBUSY		0x0100	// Transmit busy flag
	#define	I2C_CTL_NSERM		0x0010	// Noise remove on/off
	#define	I2C_CTL_STP			0x0002	// Stop control
	#define	I2C_CTL_STRT		0x0001	// Start control

// I2C Data Register
#define		I2C_DAT				((volatile unsigned short *)0x4344)

	#define	I2C_DAT_RBRDY		0x0800	// Receive buffer ready
	#define	I2C_DAT_RXE			0x0400	// Receive execution
	#define	I2C_DAT_TXE			0x0200	// Transmit execution
	#define	I2C_DAT_RTACK		0x0100	// Receive/transmit ACK
	#define	I2C_DAT_RTDT		0x00FF	// Receive/transmit data

// I2C Interrupt Control Register
#define		I2C_ICT				((volatile unsigned short *)0x4346)

	#define	I2C_ICT_RINTE		0x0002	// Receive interrupt enable
	#define	I2C_ICT_TINTE		0x0001	// Transmit interrupt enable


/*****************************************************************************
	 CT			(0x5000)
*****************************************************************************/
// Clock Timer Control Register
#define		CT_CTL				((volatile unsigned char *)0x5000)

	#define	CT_CTL_CTRST		0x10	// Clock timer reset
	#define	CT_CTL_CTRUN		0x01	// Clock timer run/stop control

// Clock Timer Counter Register
#define		CT_CNT				((volatile unsigned char *)0x5001)

	#define	CT_CNT_CTCNT		0xFF	// Clock timer counter value

// Clock Timer Interrupt Mask Register
#define		CT_IMSK				((volatile unsigned char *)0x5002)

	#define	CT_IMSK_CTIE32		0x08	// 32 Hz interrupt enable
	#define	CT_IMSK_CTIE8		0x04	// 8 Hz interrupt enable
	#define	CT_IMSK_CTIE2		0x02	// 2 Hz interrupt enable
	#define	CT_IMSK_CTIE1		0x01	// 1 Hz interrupt enable

// Clock Timer Interrupt Flag Register
#define		CT_IFLG				((volatile unsigned char *)0x5003)

	#define	CT_IFLG_CTIF32		0x08	//32 Hz interrupt flag
	#define	CT_IFLG_CTIF8		0x04	//8 Hz interrupt flag
	#define	CT_IFLG_CTIF2		0x02	//2 Hz interrupt flag
	#define	CT_IFLG_CTIF1		0x01	//1 Hz interrupt flag

/*****************************************************************************
	 SWT		(0x5020)
*****************************************************************************/
// Stopwatch Timer Control Register
#define		SWT_CTL				((volatile unsigned char *)0x5020)

	#define	SWT_CTL_SWTRST		0x10	// Stopwatch timer reset
	#define	SWT_CTL_SWTRUN		0x01	// Stopwatch timer run/stop control 

// Stopwatch Timer BCD Counter Register
#define		SWT_BCNT			((volatile unsigned char *)0x5021)

	#define	SWT_BCNT_BCD10		0xF0	// 1/10 sec. BCD counter value
	#define	SWT_BCNT_BCD100		0x0F	// 1/100 sec. BCD counter value

// Stopwatch Timer Interrupt Mask Register
#define		SWT_IMSK			((volatile unsigned char *)0x5022)

	#define	SWT_IMSK_SIE1		0x04	// 1 Hz interrupt enable
	#define	SWT_IMSK_SIE10		0x02	// 10 Hz interrupt enable
	#define	SWT_IMSK_SIE100		0x01	// 100 Hz interrupt enable

// Stopwatch Timer Interrupt Flag Register
#define		SWT_IFLG			((volatile unsigned char *)0x5023)

	#define	SWT_IMSK_SIF1		0x04	// 1 Hz interrupt flag
	#define	SWT_IMSK_SIF10		0x02	// 10 Hz interrupt flag
	#define	SWT_IMSK_SIF100		0x01	// 100 Hz interrupt flag


/*****************************************************************************
	 WDT		(0x5040)
*****************************************************************************/
// Watchdog Timer Control Register
#define		WDT_CTL				((volatile unsigned char *)0x5040)

	#define	WDT_CTL_WDTRST		0x10	// Watchdog timer reset
	#define	WDT_CTL_WDTRUN		0x0F	// Watchdog timer run/stop control

// Watchdog Timer Status Register
#define		WDT_ST				((volatile unsigned char *)0x5041)

	#define	WDT_ST_WDTMD	0x02	// NMI/Reset mode select
	#define	WDT_ST_WDTST	0x01	// NMI status


/*****************************************************************************
	 OSC		(0x5060)
*****************************************************************************/
// Clock Source Select Register
#define		OSC_SRC				((volatile unsigned char *)0x5060)

	#define	OSC_SRC_HSCLKSEL	0x02	// High-speed clock select
	#define	OSC_SRC_CLKSRC		0x01	// System clock source select

// Oscillation Control Register
#define		OSC_CTL				((volatile unsigned char *)0x5061)

	#define	OSC_CTL_IOSCWT		0xC0	// IOSC wait cycle select
	#define	OSC_CTL_OSC3WT		0x30	// OSC3 wait cycle select
	#define	OSC_CTL_IOSCEN		0x04	// IOSC enable
	#define	OSC_CTL_OSC1EN		0x02	// OSC1 enable
	#define	OSC_CTL_OSC3EN		0x01	// OSC3 enable

// Noise Filter Enable Register
#define		OSC_NFEN			((volatile unsigned char *)0x5062)

	#define	OSC_NFEN_RSTFE		0x02	// Reset noise filter enable
	#define	OSC_NFEN_NMIFE		0x01	// NMI noise filter enable

// LCD Clock Setup Register
#define		OSC_LCLK			((volatile unsigned char *)0x5063)

	#define	OSC_LCLK_LCKDV		0x1C	// LCD clock division ratio select
	#define	OSC_LCLK_LCKSRC		0x02	// LCD clock source select
	#define	OSC_LCLK_LCKEN		0x01	// LCD clock enable

// FOUT Control Register
#define		OSC_FOUT			((volatile unsigned char *)0x5064)

	#define	OSC_FOUT_FOUTHD		0xC0	// FOUTH clock division ratio select
	#define	OSC_FOUT_FOUTHE		0x02	// FOUTH output enable
	#define	OSC_FOUT_FOUT1E		0x01	// FOUT1 output enable

// T8OSC1 Clock Control Register
#define		OSC_T8OSC1			((volatile unsigned char *)0x5065)

	#define	OSC_T8OSC1_T8O1CK	0xE0	// T8OSC1 clock division ratio select
	#define	OSC_T8OSC1_T8O1CE	0x01	// T8OSC1 clock output enable

/*****************************************************************************
	 CLG		(0x5080)
*****************************************************************************/
// PCLK Control Register
#define		CLG_PCLK			((volatile unsigned char *)0x5080)

	#define	CLG_PCLK_PCKEN		0x03	// PCLK enable

#define		CLG_CCLK			((volatile unsigned char *)0x5081)

	#define	CLG_PCLK_CCLKGR		0x03	// CCLK clock gear ratio select


/*****************************************************************************
	 LCD		(0x50a0)
*****************************************************************************/
// LCD Display Control Register
#define		LCD_DCTL			((volatile unsigned char *)0x50a0)

	#define	LCD_DCTL_SEGREV		0x80	// Segment output assignment control
	#define	LCD_DCTL_COMREV		0x40	// Common output assignment control
	#define	LCD_DCTL_DSPAR		0x20	// Display memory area control
	#define	LCD_DCTL_DSPREV		0x10	// Reverse display control
	#define	LCD_DCTL_DSPC		0x03	// LCD display control

// LCD Contrast Adjust Register
#define		LCD_CADJ			((volatile unsigned char *)0x50a1)

	#define	LCD_CADJ_LC			0x0f	// LCD contrast adjustment

// LCD Clock Control Register
#define		LCD_CCTL			((volatile unsigned char *)0x50a2)

	#define	LCD_CCTL_LDUTY		0x03	// LCD duty select

// LCD Voltage Regulator Control Register
#define		LCD_VREG			((volatile unsigned char *)0x50a3)

	#define	LCD_VREG_LHVLD		0x10	// LCD heavy load protection mode

// LCD Power Voltage Booster Control Register
#define		LCD_PWR 			((volatile unsigned char *)0x50a4)

	#define	LCD_PWR_VDSEL		0x02	// Regulator power source select
	#define	LCD_PWR_PBON		0x01	// Power voltage booster control

// LCD Interrupt Mask Register
#define		LCD_IMSK			((volatile unsigned char *)0x50a5)

	#define	LCD_IMSK_FRMIE		0x01		// Frame signal interrupt enable

// LCD Interrupt Flag Register
#define		LCD_IFLG			((volatile unsigned char *)0x50a6)

	#define	LCD_IFLG_FRMIF		0x01		//  Frame signal interrupt flag


/*****************************************************************************
	 T8OSC1		(0x50c0)
*****************************************************************************/
// 8-bit OSC1 Timer Control Register
#define		T8OSC1_CTL	 		((volatile unsigned char *)0x50c0)

	#define	T8OSC1_CTL_T8ORST	0x10	// Timer reset
	#define	T8OSC1_CTL_T8ORMD	0x02	// Count mode select
	#define	T8OSC1_CTL_T8ORUN	0x01	// Timer run/stop control

// 8-bit OSC1 Timer Counter Data Register
#define		T8OSC1_CNT			((volatile unsigned char *)0x50c1)

	#define	T8OSC1_CNT_T8OCNT	0xff	// Timer counter data

// 8-bit OSC1 Timer Compare Data Register
#define		T8OSC1_CMP			((volatile unsigned char *)0x50c2)

	#define	T8OSC1_CMP_T8OCMP	0xff	// Compare data

// 8-bit OSC1 Timer Interrupt Mask Register
#define		T8OSC1_IMSK			((volatile unsigned char *)0x50c3)

	#define	T8OSC1_IMSK_T8OIE	0x01	// 8-bit OSC1 timer interrupt enable

// 8-bit OSC1 Timer Interrupt Flag Register
#define		T8OSC1_IFLG			((volatile unsigned char *)0x50c4)

	#define	T8OSC1_IFLG_T8OIF	0x01	// 8-bit OSC1 timer interrupt flag

// 8-bit OSC1 Timer PWM Duty Data Register
#define		T8OSC1_DUTY			((volatile unsigned char *)0x50c5)

	#define	T8OSC1_DUTY_T8ODTY	0xff	// PWM output duty data


/*****************************************************************************
	 SVD		(0x5100)
*****************************************************************************/
// SVD Enable Register
#define		SVD_EN				((volatile unsigned char *)0x5100)

	#define	SVD_EN_SVDEN		0x01	// SVD enable

// SVD Compare Voltage Register
#define		SVD_CMP 			((volatile unsigned char *)0x5101)

	#define	SVD_CMP_SVDC		0x0f	// SVD compare voltage

// SVD Detection Result Register
#define		SVD_RSLT			((volatile unsigned char *)0x5102)

	#define	SVD_RSLT_SVDDT		0x01	// SVD detection result

// SVD Interrupt Mask Register
#define		SVD_IMSK			((volatile unsigned char *)0x5103)

	#define	SVD_IMSK_SVDIE		0x01	// SVD interrupt enable

// SVD Interrupt Flag Register
#define		SVD_IFLG			((volatile unsigned char *)0x5104)

	#define	SVD_IFLG_SVDIF		0x01	// SVD interrupt flag


/*****************************************************************************
	 VD1		(0x5120)
*****************************************************************************/
// VD1 Control Register
#define		VD1_CTL				((volatile unsigned char *)0x5120)

	#define	VD1_CTL_HVLD		0x20	// VD1 heavy load protection mode
	#define	VD1_CTL_VD1MD		0x01	// Flash erase/program mode


/*****************************************************************************
	P(port) 	(0x5200)
*****************************************************************************/
// P0 Port Input Data Register
#define		P0_IN				((volatile unsigned char *)0x5200)

	#define	P0_IN_P0IN7			0x80	// P07 port input data
	#define	P0_IN_P0IN6			0x40	// P06 port input data
	#define	P0_IN_P0IN5			0x20	// P05 port input data
	#define	P0_IN_P0IN4			0x10	// P04 port input data
	#define	P0_IN_P0IN3			0x08	// P03 port input data
	#define	P0_IN_P0IN2			0x04	// P02 port input data
	#define	P0_IN_P0IN1			0x02	// P01 port input data
	#define	P0_IN_P0IN0			0x01	// P00 port input data

// P0 Port Output Data Register
#define		P0_OUT				((volatile unsigned char *)0x5201)

	#define	P0_OUT_P0OUT7		0x80	// P07 port output data
	#define	P0_OUT_P0OUT6		0x40	// P06 port output data
	#define	P0_OUT_P0OUT5		0x20	// P05 port output data
	#define	P0_OUT_P0OUT4		0x10	// P04 port output data
	#define	P0_OUT_P0OUT3		0x08	// P03 port output data
	#define	P0_OUT_P0OUT2		0x04	// P02 port output data
	#define	P0_OUT_P0OUT1		0x02	// P01 port output data
	#define	P0_OUT_P0OUT0		0x01	// P00 port output data

// P0 Port Output Enable Register
#define		P0_OEN				((volatile unsigned char *)0x5202)

	#define	P0_OEN_P0OEN7		0x80	// P07 port output enable
	#define	P0_OEN_P0OEN6		0x40	// P06 port output enable
	#define	P0_OEN_P0OEN5		0x20	// P05 port output enable
	#define	P0_OEN_P0OEN4		0x10	// P04 port output enable
	#define	P0_OEN_P0OEN3		0x08	// P03 port output enable
	#define	P0_OEN_P0OEN2		0x04	// P02 port output enable
	#define	P0_OEN_P0OEN1		0x02	// P01 port output enable
	#define	P0_OEN_P0OEN0		0x01	// P00 port output enable

// P0 Port Pull-up Control Register
#define		P0_PU				((volatile unsigned char *)0x5203)

	#define	P0_PU_P0PU7			0x80	// P07 port pull-up enable
	#define	P0_PU_P0PU6			0x40	// P06 port pull-up enable
	#define	P0_PU_P0PU5			0x20	// P05 port pull-up enable
	#define	P0_PU_P0PU4			0x10	// P04 port pull-up enable
	#define	P0_PU_P0PU3			0x08	// P03 port pull-up enable
	#define	P0_PU_P0PU2			0x04	// P02 port pull-up enable
	#define	P0_PU_P0PU1			0x02	// P01 port pull-up enable
	#define	P0_PU_P0PU0			0x01	// P00 port pull-up enable

// P0 Port Schmitt Trigger Control Register
#define		P0_SM				((volatile unsigned char *)0x5204)

	#define	P0_SM_P0SM7			0x80	// P07 port Schmitt trigger input enable
	#define	P0_SM_P0SM6			0x40	// P06 port Schmitt trigger input enable
	#define	P0_SM_P0SM5			0x20	// P05 port Schmitt trigger input enable
	#define	P0_SM_P0SM4			0x10	// P04 port Schmitt trigger input enable
	#define	P0_SM_P0SM3			0x08	// P03 port Schmitt trigger input enable
	#define	P0_SM_P0SM2			0x04	// P02 port Schmitt trigger input enable
	#define	P0_SM_P0SM1			0x02	// P01 port Schmitt trigger input enable
	#define	P0_SM_P0SM0			0x01	// P00 port Schmitt trigger input enable

// P0 Port Interrupt Mask Register
#define		P0_IMSK				((volatile unsigned char *)0x5205)

	#define	P0_IMSK_P0IE7		0x80	// P07 port interrupt enable
	#define	P0_IMSK_P0IE6		0x40	// P06 port interrupt enable
	#define	P0_IMSK_P0IE5		0x20	// P05 port interrupt enable
	#define	P0_IMSK_P0IE4		0x10	// P04 port interrupt enable
	#define	P0_IMSK_P0IE3		0x08	// P03 port interrupt enable
	#define	P0_IMSK_P0IE2		0x04	// P02 port interrupt enable
	#define	P0_IMSK_P0IE1		0x02	// P01 port interrupt enable
	#define	P0_IMSK_P0IE0		0x01	// P00 port interrupt enable

// P0 Port Interrupt Edge Select Register
#define		P0_EDGE				((volatile unsigned char *)0x5206)

	#define	P0_EDGE_P0EDGE7		0x80	// P07 port interrupt edge select
	#define	P0_EDGE_P0EDGE6		0x40	// P06 port interrupt edge select
	#define	P0_EDGE_P0EDGE5		0x20	// P05 port interrupt edge select
	#define	P0_EDGE_P0EDGE4		0x10	// P04 port interrupt edge select
	#define	P0_EDGE_P0EDGE3		0x08	// P03 port interrupt edge select
	#define	P0_EDGE_P0EDGE2		0x04	// P02 port interrupt edge select
	#define	P0_EDGE_P0EDGE1		0x02	// P01 port interrupt edge select
	#define	P0_EDGE_P0EDGE0		0x01	// P00 port interrupt edge select

// P0 Port Interrupt Flag Register
#define		P0_IFLG				((volatile unsigned char *)0x5207)

	#define	P0_IFLG_P0IF7		0x80	// P07 port interrupt flag
	#define	P0_IFLG_P0IF6		0x40	// P06 port interrupt flag
	#define	P0_IFLG_P0IF5		0x20	// P05 port interrupt flag
	#define	P0_IFLG_P0IF4		0x10	// P04 port interrupt flag
	#define	P0_IFLG_P0IF3		0x08	// P03 port interrupt flag
	#define	P0_IFLG_P0IF2		0x04	// P02 port interrupt flag
	#define	P0_IFLG_P0IF1		0x02	// P01 port interrupt flag
	#define	P0_IFLG_P0IF0		0x01	// P00 port interrupt flag

// P0 Port Chattering Filter Control Register
#define		P0_CHAT				((volatile unsigned char *)0x5208)

	#define	P0_CHAT_P0CF2		0x70	// P0[7:4]chattering filter time
	#define	P0_CHAT_P0CF1		0x07	// P0[3:0]chattering filter time

// P0 Port Key-Entry Reset Configuration Register
#define		P0_KRST				((volatile unsigned char *)0x5209)

	#define	P0_KRST_P0KRST		0x03	// P0 port key-entry reset configuration
	
// P0 Port Input Enable Register
#define		P0_IEN				((volatile unsigned char *)0x520a)

	#define	P0_IEN_P0EN7		0x80	// P07 port interrupt enable
	#define	P0_IEN_P0EN6		0x40	// P06 port interrupt enable
	#define	P0_IEN_P0EN5		0x20	// P05 port interrupt enable
	#define	P0_IEN_P0EN4		0x10	// P04 port interrupt enable
	#define	P0_IEN_P0EN3		0x08	// P03 port interrupt enable
	#define	P0_IEN_P0EN2		0x04	// P02 port interrupt enable
	#define	P0_IEN_P0EN1		0x02	// P01 port interrupt enable
	#define	P0_IEN_P0EN0		0x01	// P00 port interrupt enable


// P1 Port Input Data Register
#define		P1_IN				((volatile unsigned char *)0x5210)

	#define	P1_IN_P1IN7			0x80	// P17 port input data
	#define	P1_IN_P1IN6			0x40	// P16 port input data
	#define	P1_IN_P1IN5			0x20	// P15 port input data
	#define	P1_IN_P1IN4			0x10	// P14 port input data
	#define	P1_IN_P1IN3			0x08	// P13 port input data
	#define	P1_IN_P1IN2			0x04	// P12 port input data
	#define	P1_IN_P1IN1			0x02	// P11 port input data
	#define	P1_IN_P1IN0			0x01	// P10 port input data

// P1 Port Output Data Register
#define		P1_OUT				((volatile unsigned char *)0x5211)

	#define	P1_OUT_P1OUT7		0x80	// P17 port output data
	#define	P1_OUT_P1OUT6		0x40	// P16 port output data
	#define	P1_OUT_P1OUT5		0x20	// P15 port output data
	#define	P1_OUT_P1OUT4		0x10	// P14 port output data
	#define	P1_OUT_P1OUT3		0x08	// P13 port output data
	#define	P1_OUT_P1OUT2		0x04	// P12 port output data
	#define	P1_OUT_P1OUT1		0x02	// P11 port output data
	#define	P1_OUT_P1OUT0		0x01	// P10 port output data

// P1 Port Output Enable Register
#define		P1_OEN				((volatile unsigned char *)0x5212)

	#define	P1_OEN_P1OEN7		0x80	// P17 port output enable
	#define	P1_OEN_P1OEN6		0x40	// P16 port output enable
	#define	P1_OEN_P1OEN5		0x20	// P15 port output enable
	#define	P1_OEN_P1OEN4		0x10	// P14 port output enable
	#define	P1_OEN_P1OEN3		0x08	// P13 port output enable
	#define	P1_OEN_P1OEN2		0x04	// P12 port output enable
	#define	P1_OEN_P1OEN1		0x02	// P11 port output enable
	#define	P1_OEN_P1OEN0		0x01	// P10 port output enable

// P1 Port Pull-up Control Register
#define		P1_PU				((volatile unsigned char *)0x5213)

	#define	P1_PU_P1PU7			0x80	// P17 port pull-up enable
	#define	P1_PU_P1PU6			0x40	// P16 port pull-up enable
	#define	P1_PU_P1PU5			0x20	// P15 port pull-up enable
	#define	P1_PU_P1PU4			0x10	// P14 port pull-up enable
	#define	P1_PU_P1PU3			0x08	// P13 port pull-up enable
	#define	P1_PU_P1PU2			0x04	// P12 port pull-up enable
	#define	P1_PU_P1PU1			0x02	// P11 port pull-up enable
	#define	P1_PU_P1PU0			0x01	// P10 port pull-up enable

// P1 Port Schmitt Trigger Control Register
#define		P1_SM				((volatile unsigned char *)0x5214)

	#define	P1_SM_P1SM7			0x80	// P17 port Schmitt trigger input enable
	#define	P1_SM_P1SM6			0x40	// P16 port Schmitt trigger input enable
	#define	P1_SM_P1SM5			0x20	// P15 port Schmitt trigger input enable
	#define	P1_SM_P1SM4			0x10	// P14 port Schmitt trigger input enable
	#define	P1_SM_P1SM3			0x08	// P13 port Schmitt trigger input enable
	#define	P1_SM_P1SM2			0x04	// P12 port Schmitt trigger input enable
	#define	P1_SM_P1SM1			0x02	// P11 port Schmitt trigger input enable
	#define	P1_SM_P1SM0			0x01	// P10 port Schmitt trigger input enable

// P1 Port Interrupt Mask Register
#define		P1_IMSK				((volatile unsigned char *)0x5215)

	#define	P1_IMSK_P1IE7		0x80	// P17 port interrupt enable
	#define	P1_IMSK_P1IE6		0x40	// P16 port interrupt enable
	#define	P1_IMSK_P1IE5		0x20	// P15 port interrupt enable
	#define	P1_IMSK_P1IE4		0x10	// P14 port interrupt enable
	#define	P1_IMSK_P1IE3		0x08	// P13 port interrupt enable
	#define	P1_IMSK_P1IE2		0x04	// P12 port interrupt enable
	#define	P1_IMSK_P1IE1		0x02	// P11 port interrupt enable
	#define	P1_IMSK_P1IE0		0x01	// P10 port interrupt enable

// P1 Port Interrupt Edge Select Register
#define		P1_EDGE				((volatile unsigned char *)0x5216)

	#define	P1_EDGE_P1EDGE7		0x80	// P17 port interrupt edge select
	#define	P1_EDGE_P1EDGE6		0x40	// P16 port interrupt edge select
	#define	P1_EDGE_P1EDGE5		0x20	// P15 port interrupt edge select
	#define	P1_EDGE_P1EDGE4		0x10	// P14 port interrupt edge select
	#define	P1_EDGE_P1EDGE3		0x08	// P13 port interrupt edge select
	#define	P1_EDGE_P1EDGE2		0x04	// P12 port interrupt edge select
	#define	P1_EDGE_P1EDGE1		0x02	// P11 port interrupt edge select
	#define	P1_EDGE_P1EDGE0		0x01	// P10 port interrupt edge select

// P1 Port Interrupt Flag Register
#define		P1_IFLG				((volatile unsigned char *)0x5217)

	#define	P1_IFLG_P1IF7		0x80	// P17 port interrupt flag
	#define	P1_IFLG_P1IF6		0x40	// P16 port interrupt flag
	#define	P1_IFLG_P1IF5		0x20	// P15 port interrupt flag
	#define	P1_IFLG_P1IF4		0x10	// P14 port interrupt flag
	#define	P1_IFLG_P1IF3		0x08	// P13 port interrupt flag
	#define	P1_IFLG_P1IF2		0x04	// P12 port interrupt flag
	#define	P1_IFLG_P1IF1		0x02	// P11 port interrupt flag
	#define	P1_IFLG_P1IF0		0x01	// P10 port interrupt flag

// P1 Port Chattering Filter Control Register
#define		P1_CHAT				((volatile unsigned char *)0x5218)

	#define	P1_CHAT_P1CF2		0x70	// P1[7:4]chattering filter time
	#define	P1_CHAT_P1CF1		0x07	// P1[3:0]chattering filter time

// P1 Port Input Enable Register
#define		P1_IEN				((volatile unsigned char *)0x521a)

	#define	P1_IEN_P1EN7		0x80	// P17 port interrupt enable
	#define	P1_IEN_P1EN6		0x40	// P16 port interrupt enable
	#define	P1_IEN_P1EN5		0x20	// P15 port interrupt enable
	#define	P1_IEN_P1EN4		0x10	// P14 port interrupt enable
	#define	P1_IEN_P1EN3		0x08	// P13 port interrupt enable
	#define	P1_IEN_P1EN2		0x04	// P12 port interrupt enable
	#define	P1_IEN_P1EN1		0x02	// P11 port interrupt enable
	#define	P1_IEN_P1EN0		0x01	// P10 port interrupt enable


// P2 Port Input Data Register
#define		P2_IN				((volatile unsigned char *)0x5220)

	#define	P2_IN_P2IN7			0x80	// P27 port input data
	#define	P2_IN_P2IN6			0x40	// P26 port input data
	#define	P2_IN_P2IN5			0x20	// P25 port input data
	#define	P2_IN_P2IN4			0x10	// P24 port input data
	#define	P2_IN_P2IN3			0x08	// P23 port input data
	#define	P2_IN_P2IN2			0x04	// P22 port input data
	#define	P2_IN_P2IN1			0x02	// P21 port input data
	#define	P2_IN_P2IN0			0x01	// P20 port input data

// P2 Port Output Data Register
#define		P2_OUT				((volatile unsigned char *)0x5221)

	#define	P2_OUT_P2OUT7		0x80	// P27 port output data
	#define	P2_OUT_P2OUT6		0x40	// P26 port output data
	#define	P2_OUT_P2OUT5		0x20	// P25 port output data
	#define	P2_OUT_P2OUT4		0x10	// P24 port output data
	#define	P2_OUT_P2OUT3		0x08	// P23 port output data
	#define	P2_OUT_P2OUT2		0x04	// P22 port output data
	#define	P2_OUT_P2OUT1		0x02	// P21 port output data
	#define	P2_OUT_P2OUT0		0x01	// P20 port output data

// P2 Port Output Enable Register
#define		P2_OEN				((volatile unsigned char *)0x5222)

	#define	P2_OEN_P2OEN7		0x80	// P27 port output enable
	#define	P2_OEN_P2OEN6		0x40	// P26 port output enable
	#define	P2_OEN_P2OEN5		0x20	// P25 port output enable
	#define	P2_OEN_P2OEN4		0x10	// P24 port output enable
	#define	P2_OEN_P2OEN3		0x08	// P23 port output enable
	#define	P2_OEN_P2OEN2		0x04	// P22 port output enable
	#define	P2_OEN_P2OEN1		0x02	// P21 port output enable
	#define	P2_OEN_P2OEN0		0x01	// P20 port output enable

// P2 Port Pull-up Control Register
#define		P2_PU				((volatile unsigned char *)0x5223)

	#define	P2_PU_P2PU7			0x80	// P27 port pull-up enable
	#define	P2_PU_P2PU6			0x40	// P26 port pull-up enable
	#define	P2_PU_P2PU5			0x20	// P25 port pull-up enable
	#define	P2_PU_P2PU4			0x10	// P24 port pull-up enable
	#define	P2_PU_P2PU3			0x08	// P23 port pull-up enable
	#define	P2_PU_P2PU2			0x04	// P22 port pull-up enable
	#define	P2_PU_P2PU1			0x02	// P21 port pull-up enable
	#define	P2_PU_P2PU0			0x01	// P20 port pull-up enable

// P2 Port Schmitt Trigger Control Register
#define		P2_SM				((volatile unsigned char *)0x5224)

	#define	P2_SM_P2SM7			0x80	// P27 port Schmitt trigger input enable
	#define	P2_SM_P2SM6			0x40	// P26 port Schmitt trigger input enable
	#define	P2_SM_P2SM5			0x20	// P25 port Schmitt trigger input enable
	#define	P2_SM_P2SM4			0x10	// P24 port Schmitt trigger input enable
	#define	P2_SM_P2SM3			0x08	// P23 port Schmitt trigger input enable
	#define	P2_SM_P2SM2			0x04	// P22 port Schmitt trigger input enable
	#define	P2_SM_P2SM1			0x02	// P21 port Schmitt trigger input enable
	#define	P2_SM_P2SM0			0x01	// P20 port Schmitt trigger input enable

// P2 Port Input Enable Register
#define		P2_IEN				((volatile unsigned char *)0x522a)

	#define	P2_IEN_P2EN7		0x80	// P27 port interrupt enable
	#define	P2_IEN_P2EN6		0x40	// P26 port interrupt enable
	#define	P2_IEN_P2EN5		0x20	// P25 port interrupt enable
	#define	P2_IEN_P2EN4		0x10	// P24 port interrupt enable
	#define	P2_IEN_P2EN3		0x08	// P23 port interrupt enable
	#define	P2_IEN_P2EN2		0x04	// P22 port interrupt enable
	#define	P2_IEN_P2EN1		0x02	// P21 port interrupt enable
	#define	P2_IEN_P2EN0		0x01	// P20 port interrupt enable

// P3 Port Input Data Register
#define		P3_IN				((volatile unsigned char *)0x5230)

	#define	P3_IN_P3IN7			0x80	// P37 port input data
	#define	P3_IN_P3IN6			0x40	// P36 port input data
	#define	P3_IN_P3IN5			0x20	// P35 port input data
	#define	P3_IN_P3IN4			0x10	// P34 port input data
	#define	P3_IN_P3IN3			0x08	// P33 port input data
	#define	P3_IN_P3IN2			0x04	// P32 port input data
	#define	P3_IN_P3IN1			0x02	// P31 port input data
	#define	P3_IN_P3IN0			0x01	// P30 port input data

// P3 Port Output Data Register
#define		P3_OUT				((volatile unsigned char *)0x5231)

	#define	P3_OUT_P3OUT7		0x80	// P37 port output data
	#define	P3_OUT_P3OUT6		0x40	// P36 port output data
	#define	P3_OUT_P3OUT5		0x20	// P35 port output data
	#define	P3_OUT_P3OUT4		0x10	// P34 port output data
	#define	P3_OUT_P3OUT3		0x08	// P33 port output data
	#define	P3_OUT_P3OUT2		0x04	// P32 port output data
	#define	P3_OUT_P3OUT1		0x02	// P31 port output data
	#define	P3_OUT_P3OUT0		0x01	// P30 port output data

// P3 Port Output Enable Register
#define		P3_OEN				((volatile unsigned char *)0x5232)

	#define	P3_OEN_P3OEN7		0x80	// P37 port output enable
	#define	P3_OEN_P3OEN6		0x40	// P36 port output enable
	#define	P3_OEN_P3OEN5		0x20	// P35 port output enable
	#define	P3_OEN_P3OEN4		0x10	// P34 port output enable
	#define	P3_OEN_P3OEN3		0x08	// P33 port output enable
	#define	P3_OEN_P3OEN2		0x04	// P32 port output enable
	#define	P3_OEN_P3OEN1		0x02	// P31 port output enable
	#define	P3_OEN_P3OEN0		0x01	// P30 port output enable

// P3 Port Pull-up Control Register
#define		P3_PU				((volatile unsigned char *)0x5233)

	#define	P3_PU_P3PU7			0x80	// P37 port pull-up enable
	#define	P3_PU_P3PU6			0x40	// P36 port pull-up enable
	#define	P3_PU_P3PU5			0x20	// P35 port pull-up enable
	#define	P3_PU_P3PU4			0x10	// P34 port pull-up enable
	#define	P3_PU_P3PU3			0x08	// P33 port pull-up enable
	#define	P3_PU_P3PU2			0x04	// P32 port pull-up enable
	#define	P3_PU_P3PU1			0x02	// P31 port pull-up enable
	#define	P3_PU_P3PU0			0x01	// P30 port pull-up enable

// P3 Port Schmitt Trigger Control Register
#define		P3_SM				((volatile unsigned char *)0x5234)

	#define	P3_SM_P3SM7			0x80	// P37 port Schmitt trigger input enable
	#define	P3_SM_P3SM6			0x40	// P36 port Schmitt trigger input enable
	#define	P3_SM_P3SM5			0x20	// P35 port Schmitt trigger input enable
	#define	P3_SM_P3SM4			0x10	// P34 port Schmitt trigger input enable
	#define	P3_SM_P3SM3			0x08	// P33 port Schmitt trigger input enable
	#define	P3_SM_P3SM2			0x04	// P32 port Schmitt trigger input enable
	#define	P3_SM_P3SM1			0x02	// P31 port Schmitt trigger input enable
	#define	P3_SM_P3SM0			0x01	// P30 port Schmitt trigger input enable

// P3 Port Input Enable Register
#define		P3_IEN				((volatile unsigned char *)0x523a)

	#define	P3_IEN_P3EN7		0x80	// P37 port interrupt enable
	#define	P3_IEN_P3EN6		0x40	// P36 port interrupt enable
	#define	P3_IEN_P3EN5		0x20	// P35 port interrupt enable
	#define	P3_IEN_P3EN4		0x10	// P34 port interrupt enable
	#define	P3_IEN_P3EN3		0x08	// P33 port interrupt enable
	#define	P3_IEN_P3EN2		0x04	// P32 port interrupt enable
	#define	P3_IEN_P3EN1		0x02	// P31 port interrupt enable
	#define	P3_IEN_P3EN0		0x01	// P30 port interrupt enable


/*****************************************************************************
	P(mux)		(0x52a0)
*****************************************************************************/
// P0 Port Function Select Register
#define		P0_PMUX				((volatile unsigned char *)0x52a0)

	#define	P0_PMUX_P05MUX		0x20	// P05 port function select
	#define	P0_PMUX_P04MUX		0x10	// P04 port function select
	#define	P0_PMUX_P03MUX		0x08	// P03 port function select
	#define	P0_PMUX_P02MUX		0x04	// P02 port function select

// P1 Port Function Select Register
#define		P1_PMUX				((volatile unsigned char *)0x52a1)

	#define	P1_PMUX_P17MUX		0x80	// P17 port function select
	#define	P1_PMUX_P16MUX		0x40	// P16 port function select
	#define	P1_PMUX_P15MUX		0x20	// P15 port function select
	#define	P1_PMUX_P14MUX		0x10	// P14 port function select
	#define	P1_PMUX_P13MUX		0x08	// P13 port function select
	#define	P1_PMUX_P12MUX		0x04	// P12 port function select
	#define	P1_PMUX_P11MUX		0x02	// P11 port function select
	#define	P1_PMUX_P10MUX		0x01	// P10 port function select

// P2 Port Function Select Register
#define		P2_PMUX				((volatile unsigned char *)0x52a2)

	#define	P2_PMUX_P27MUX		0x80	// P27 port function select
	#define	P2_PMUX_P26MUX		0x40	// P26 port function select
	#define	P2_PMUX_P25MUX		0x20	// P25 port function select
	#define	P2_PMUX_P24MUX		0x10	// P24 port function select
	#define	P2_PMUX_P23MUX		0x08	// P23 port function select
	#define	P2_PMUX_P22MUX		0x04	// P22 port function select
	#define	P2_PMUX_P21MUX		0x02	// P21 port function select
	#define	P2_PMUX_P20MUX		0x01	// P20 port function select

// P3 Port Function Select Register
#define		P3_PMUX				((volatile unsigned char *)0x52a3)

	#define	P3_PMUX_P33MUX		0x08	// P33 port function select
	#define	P3_PMUX_P32MUX		0x04	// P32 port function select
	#define	P3_PMUX_P31MUX		0x02	// P31 port function select
	#define	P3_PMUX_P30MUX		0x01	// P30 port function select


/*****************************************************************************
	 T16E Ch0	(0x5300)
*****************************************************************************/
// PWM Timer Ch.0 Compare Data A Register
#define		T16E_CA0			((volatile unsigned short *)0x5300)

	#define T16E_CA0_T16ECA		0xffff	// Compare data A

// PWM Timer Ch.0 Compare Data B Register
#define		T16E_CB0			((volatile unsigned short *)0x5302)

	#define T16E_CB0_T16ECB		0xffff	// Compare data B

// PWM Timer Ch.0 Counter Data Register
#define		T16E_TC0			((volatile unsigned short *)0x5304)

	#define	T16E_TC0_T16ETC		0xffff	// Counter data

// PWM Timer Ch.0 Control Register
#define		T16E_CTL0			((volatile unsigned short *)0x5306)

	#define	T16E_CTL0_INITOL	0x0100	// Initial output level
	#define	T16E_CTL0_SELFM		0x0040	// Fine mode select
	#define	T16E_CTL0_CBUFEN	0x0020	// Comparison buffer enable
	#define	T16E_CTL0_INVOUT	0x0010	// Inverse output
	#define	T16E_CTL0_CLKSEL	0x0008	// Input clock select
	#define	T16E_CTL0_OUTEN		0x0004	// Clock output enable
	#define	T16E_CTL0_T16ERST	0x0002	// Timer reset
	#define	T16E_CTL0_T16ERUN	0x0001	// Timer run/stop control

// PWM Timer Ch.0 Input Clock Select Register
#define		T16E_CLK0			((volatile unsigned short *)0x5308)

	#define	T16E_CLK0_T16EDF	0x000f	// Timer input clock select

// PWM Timer Ch.0 Interrupt Mask Register
#define		T16E_IMSK0			((volatile unsigned short *)0x530a)

	#define	T16E_IMSK0_CBIE		0x0002	// Compare B interrupt enable
	#define	T16E_IMSK0_CAIE		0x0001	// Compare A interrupt enable

// PWM Timer Ch.0 Interrupt Flag Register
#define		T16E_IFLG0			((volatile unsigned short *)0x530c)

	#define	T16E_IFLG0_CBIF		0x0002	// Compare B interrupt flag
	#define	T16E_IFLG0_CAIF		0x0001	// Compare A interrupt flag


/*****************************************************************************
	 MISC		(0x5320)
*****************************************************************************/
// FLASHC/SRAMC Control Register
#define		MISC_FL				((volatile unsigned short *)0x5320)

	#define	MISC_FL_SRCYC		0x0300	// SRAMC access cycle
	#define	MISC_FL_FLCYC		0x0003	// FLASHC read access cycle

// OSC1 Peripheral Control Register
#define		MISC_OSC1			((volatile unsigned short *)0x5322)

	#define	MISC_OSC1_O1DBG		0x0001	// OSC1 peripheral control in debug mode

// MISC Protect Register
#define		MISC_PROT			((volatile unsigned short *)0x5324)

	#define	MISC_PROT_PROT		0x0096	// MISC register write protect

// IRAM Size Select Register
#define		MISC_IRAMSZ			((volatile unsigned short *)0x5326)

	#define	MISC_IRAMSZ_DBADR	0x0100	// Debug base address select
	#define	MISC_IRAMSZ_IRAMSZ	0x0003	// IRAM size select

// Vector Table Address Low Register
#define		MISC_TTBRL			((volatile unsigned short *)0x5328)

	#define	MISC_TTBRL_TTBR		0xff00	// Vector table base address A[15:0]
										// A[7:0] fixed at 0

// Vector Table Address High Register
#define		MISC_TTBRH			((volatile unsigned short *)0x532a)

	#define	MISC_TTBRH_TTBR		0x00ff	// Vector table base address A[23:16]

// PSR Register
#define		MISC_PSR			((volatile unsigned short *)0x532c)

	#define	MISC_PSR_PSRIL		0x00e0	// PSR interrupt level (IL) bits
	#define	MISC_PSR_PSRIE		0x0010	// PSR interrupt enable (IE) bit
	#define	MISC_PSR_PSRC		0x0008	// PSR carry (C) flag
	#define	MISC_PSR_PSRV		0x0004	// PSR overflow (V) flag
	#define	MISC_PSR_PSRZ		0x0002	// PSR zero (Z) flag
	#define	MISC_PSR_PSRN		0x0001	// PSR negative (N) flag


/*****************************************************************************
	 REMC		(0x5340)
*****************************************************************************/
// REMC Configuration Register
#define		REMC_CFG			((volatile unsigned short *)0x5340)

	#define	REMC_CFG_CGCLK		0xf000	// Carrier generator clock select(Prescaler output clock)
	#define	REMC_CFG_LCCLK		0x0f00	// Length counter clock select(Prescaler output clock)
	#define	REMC_CFG_REMMD		0x0002	// REMC mode select
	#define	REMC_CFG_REMEN		0x0001	// REMC enable

// REMC Carrier Length Setup Register
#define		REMC_CAR			((volatile unsigned short *)0x5342)

	#define	REMC_CAR_REMCL		0x3f00	// L carrier length setup
	#define	REMC_CAR_REMCH		0x003f	// H carrier length setup
	
// REMC Length Counter Register
#define		REMC_LCNT			((volatile unsigned short *)0x5344)

	#define	REMC_LCNT_REMLEN	0x0002	// Transmit/receive data length count(down counter)
	#define	REMC_LCNT_REMDT		0x0001	// Transmit/receive data

// REMC Interrupt Control Register
#define		REMC_INT			((volatile unsigned short *)0x5346)

	#define	REMC_INT_REMFIF		0x0400	// Falling edge interrupt flag
	#define	REMC_INT_REMRIF		0x0200	// Rising edge interrupt flag
	#define	REMC_INT_REMUIF		0x0100	// Underflow interrupt flag
	#define	REMC_INT_REMFIE		0x0004	// Falling edge interrupt enable
	#define	REMC_INT_REMRIE		0x0002	// Rising edge interrupt enable
	#define	REMC_INT_REMUIE		0x0001	// Underflow interrupt enable


/*****************************************************************************
	 T16E Ch1	(0x5360)
*****************************************************************************/
// PWM Timer Ch.1 Compare Data A Register
#define		T16E_CA1			((volatile unsigned short *)0x5360)

	#define T16E_CA1_T16ECA		0xffff	// Compare data A

// PWM Timer Ch.1 Compare Data B Register
#define		T16E_CB1			((volatile unsigned short *)0x5362)

	#define T16E_CB1_T16ECB		0xffff	// Compare data B

// PWM Timer Ch.1 Counter Data Register
#define		T16E_TC1			((volatile unsigned short *)0x5364)

	#define	T16E_TC1_T16ETC		0xffff	// Counter data

// PWM Timer Ch.1 Control Register
#define		T16E_CTL1			((volatile unsigned short *)0x5366)

	#define	T16E_CTL1_INITOL	0x0100	// Initial output level
	#define	T16E_CTL1_SELFM		0x0040	// Fine mode select
	#define	T16E_CTL1_CBUFEN	0x0020	// Comparison buffer enable
	#define	T16E_CTL1_INVOUT	0x0010	// Inverse output
	#define	T16E_CTL1_CLKSEL	0x0008	// Input clock select
	#define	T16E_CTL1_OUTEN		0x0004	// Clock output enable
	#define	T16E_CTL1_T16ERST	0x0002	// Timer reset
	#define	T16E_CTL1_T16ERUN	0x0001	// Timer run/stop control

// PWM Timer Ch.1 Input Clock Select Register
#define		T16E_CLK1			((volatile unsigned short *)0x5368)

	#define	T16E_CLK1_T16EDF	0x000f	// Timer input clock select

// PWM Timer Ch.1 Interrupt Mask Register
#define		T16E_IMSK1			((volatile unsigned short *)0x536a)

	#define	T16E_IMSK1_CBIE		0x0002	// Compare B interrupt enable
	#define	T16E_IMSK1_CAIE		0x0001	// Compare A interrupt enable

// PWM Timer Ch.1 Interrupt Flag Register
#define		T16E_IFLG1			((volatile unsigned short *)0x536c)

	#define	T16E_IFLG1_CBIF		0x0002	// Compare B interrupt flag
	#define	T16E_IFLG1_CAIF		0x0001	// Compare A interrupt flag

#endif /* _S1C17702_H_ */
/*****************************************************************************
	 EOF
*****************************************************************************/
