/*****************************************************************************
*	s1c17702 graphic lib.
*
*
*****************************************************************************/
#ifndef	__GRLIB_H__
#define	__GRLIB_H__

/****************************************************************************
*	definition
*****************************************************************************/

// Logical definetion
#define		LOGIC_SET			0
#define		LOGIC_OR			1
#define		LOGIC_AND			2
#define		LOGIC_XOR			3

/****************************************************************************
*	macro definition
*****************************************************************************/

/****************************************************************************
*	prototype
*****************************************************************************/
extern void GrImageTrans(short x, short y, short width, short height, const unsigned char *image, unsigned char logic);
extern void GrLine(short x1, short y1, short x2, short y2, unsigned char data, unsigned char logic);
extern void GrRect(short x, short y, short width, short height, unsigned char data, unsigned char logic);
extern void GrRectFill(short x, short y, short width, short height, unsigned char data, unsigned char logic);
extern void GrPutChar(short x, short y, const unsigned char data, unsigned char logic);
extern void GrPutString(short x, short y, const unsigned char *data, unsigned char logic);
extern void GrPset(short x, short y, char unsigned data, unsigned char logic);

#endif	// __GRLIB_H__
