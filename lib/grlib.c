/*****************************************************************************
*	s1c17702 Graphic library
*
*
*****************************************************************************/
#include "system.h"
#include "s1c17702.h"
#include "lcd.h"
#include "grlib.h"
#include "lcdFont.h"

/****************************************************************************
*	definition
*****************************************************************************/
#define		FONT_WIDTH		DISPLAY_CH_ROW_SIZE
#define		FONT_HEIGHT		8
#define		FONT_ARRAY		lcdFontArray

/****************************************************************************
*	macro definition
*****************************************************************************/

/****************************************************************************
*	prototype
*****************************************************************************/
void GrImgTrans(short x, short y, short width, short height, const unsigned char *image, unsigned char logic);
void GrPset(short x, short y, char unsigned data, unsigned char logic);

/****************************************************************************
*	static function
*****************************************************************************/
static void swap(short *a, short *b)
{
	short tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/****************************************************************************
*	image(block) transfer
*	param:	x		in		x pos
*			y		in		y pos
*			width	in		image width
*			height	in		image height
*			image	in		image data address
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrImageTrans(short x, short y, short width, short height, const unsigned char *image, unsigned char logic)
{
	short	px, py;
	char	*src;
	char	mask;
	char	bit;

	src = (char *)image;

	py = 0;
	mask = 0x01;
	while(height){
		for(px = 0; px < width; px++){
			bit = *(src + px) & mask;
			GrPset((x + px), (y + py), bit, logic);
		}
		py++;
		mask <<= 1;
		if((py & 7) == 0){// modulo 8
			src += width;
			mask = 0x01;
		}
		height--;
	}

	return;
}

/****************************************************************************
*	draw line
*	param:	x1		in		x1 pos
*			y1		in		y1 pos
*			x2  	in		x2 pos
*			y2  	in		y2 pos
*			data	in		write data
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrLine(short x1, short y1, short x2, short y2, unsigned char data, unsigned char logic)
{
    int x, y;
	int dx, dy;
	int e = 0;

	if (x1 > x2) {
		swap(&x1, &x2);
	}
	if (y1 > y2) {
		swap(&y1, &y2);
	}

	dx = x2 - x1;
	dy = y2 - y1;

	if(dx > dy){
		for (y = y1, x = x1; x < x2; x++) {
			e += dy;
			if (e > dx){
				e -= dx;
				y++;
			}
			GrPset(x, y, data, logic);
		}
	}else{
		for (x = x1, y = y1; y < y2; y++) {
			e += dx;
			if (e > dy){
				e -= dy;
				x++;
			}
			GrPset(x, y, data, logic);
		}
	}

	return;
}

/****************************************************************************
*	draw rectangle
*	param:	x		in		x pos
*			y		in		y pos
*			width	in		image width
*			height	in		image height
*			data	in		write data
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrRect(short x, short y, short width, short height, unsigned char data, unsigned char logic)
{
	short px, py;
	unsigned char wdata;

	wdata = (data) ? 1 : 0;

	for(py = 0; py < height; py++){
		for(px = 0; px < width; px++){
			if(py == 0 || py == height - 1 || px == 0 || px == width - 1){
				GrPset((x + px), (y + py), wdata, logic);
			}
		}
	}
}

/****************************************************************************
*	draw rectangle fill
*	param:	x		in		x pos
*			y		in		y pos
*			width	in		image width
*			height	in		image height
*			data	in		write data
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrRectFill(short x, short y, short width, short height, unsigned char data, unsigned char logic)
{
	short px, py;
	unsigned char wdata;

	wdata = (data) ? 1 : 0;

	for(py = 0; py < height; py++){
		for(px = 0; px < width; px++){
			GrPset((x + px), (y + py), data, logic);
		}
	}
}
/****************************************************************************
*	draw charctor
*	param:	x		in		x pos
*			y		in		y pos
*			data	in		draw char(font data index)
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrPutChar(short x, short y, const unsigned char data, unsigned char logic)
{
	short	fontWidth = FONT_WIDTH;
	short	fontHeight = FONT_HEIGHT;
	char	*src;
	short	px, py;
	char	mask;
	char	bit;

//	src = (char *)&FONT_ARRAY[(data - 0x20) * fontWidth];
	src = (char *)&FONT_ARRAY[(data - 0x20)];

	py = 0;
	mask = 0x01;
	while(fontHeight){
		for(px = 0; px < fontWidth; px++){
			bit = *(src + px) & mask;
			GrPset((x + px), (y + py), bit, logic);
		}
		py++;
		mask <<= 1;
		fontHeight--;
	}

	return;
}

/****************************************************************************
*	draw strings
*	param:	x		in		x pos
*			y		in		y pos
*			*data	in		draw string
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrPutString(short x, short y, const unsigned char *data, unsigned char logic)
{
	unsigned char px;

	px = x;
	while(*data){
		GrPutChar(px, y, *data++, logic);
		px += FONT_WIDTH;
	}

	return;
}

/****************************************************************************
*	draw pixel
*	param:	x		in		x pos
*			y		in		y pos
*			data	in		draw data(0 or !0)
*			logic	in		logical setting
*	return:	none
*****************************************************************************/
void GrPset(short x, short y, char unsigned data, unsigned char logic)
{
	char *dst;
	char mask;
	char val;

	if(x >= XPOS_MAX || y >= YPOS_MAX || x < 0 || y < 0){
		return;
	}

	dst = (char *)VRAM + (((y >> 3) * LINE_OFFSET) + x);
	mask = 1 << (y & 7);
	val = (data) ? mask : 0;

	switch(logic){
	case LOGIC_AND:
		val = (*dst & mask) & val;
		break;

	case LOGIC_OR:
		val = (*dst & mask) | val;
		break;

	case LOGIC_XOR:
		val = (*dst & mask) ^ val;
		break;

	default:
		break;
	}

	if(val){
		*dst |= val;
	}
	else{
		*dst &= ~mask;
	}

	return;
}
