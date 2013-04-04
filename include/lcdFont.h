/*************************************************************  
lcdFont.h
  
This file defines the font which is used in the SVT17702-Applicateion.
  
history : 2008/04/07	start
************************************************************/
#ifndef LCDFONT_H_
#define LCDFONT_H_

/* LCD 1 line row size(byte) */
#define DISPLAY_ROW_SIZE 72

/* LCD 1 Charactor row size(byte) */
#define DISPLAY_CH_ROW_SIZE 6

/* ASCII code number in lcdFontArray */
#define FIRST_NO_OF_ASCII_CODE (unsigned short) 32
#define END_NO_OF_ASCII_CODE (unsigned short) 122

/* LCD font bit */
const unsigned char lcdFontArray[END_NO_OF_ASCII_CODE - FIRST_NO_OF_ASCII_CODE + 1][DISPLAY_CH_ROW_SIZE] = {
	{	// [0] (space)
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x00	// - - - - - - - -
	},
	{	// [1] ! 
		0x00,
		0x00,
		0x00,
		0x4f,
		0x00,
		0x00
	},
	{	// [2] " 
		0x00,
		0x00,
		0x07,
		0x00,
		0x07,
		0x00
	},
	{	// [3] # 
		0x00,
		0x14,
		0x7f,
		0x14,
		0x7f,
		0x14
	},
	{	// [4] $ 
		0x00,
		0x24,
		0x2a,
		0x7f,
		0x2a,
		0x12
	},
	{	// [5] %
		0x00,	// - - - - - - - -
		0x46,	// - @ - - - @ @ -
		0x36,	// - - @ @ - @ @ -
		0x08,	// - - - - @ - - -
		0x36,	// - - @ @ - @ @ -
		0x31	// - - @ @ - - - @
	},
	{	// [6] & 
		0x00,
		0x36,
		0x49,
		0x55,
		0x22,
		0x50
	},
	{	// [7] ' 
		0x00,
		0x00,
		0x05,
		0x03,
		0x00,
		0x00
	},
	{	// [8] ( 
		0x00,
		0x00,
		0x1c,
		0x22,
		0x41,
		0x00
	},
	{	// [9] ) 
		0x00,
		0x00,
		0x41,
		0x22,
		0x1c,
		0x00
	},
	{	// [10] * 
		0x00,
		0x14,
		0x08,
		0x3e,
		0x08,
		0x14
	},
	{	// [11] +
		0x00,	// - - - - - - - -
		0x08,	// - - - - @ - - -
		0x08,	// - - - - @ - - -
		0x3e,	// - - @ @ @ @ @ -
		0x08,	// - - - - @ - - -
		0x08	// - - - - @ - - -
	},
	{	// [12] , 
		0x00,
		0x00,
		0x50,
		0x30,
		0x00,
		0x00
	},
	{	// [13] -
		0x00,	// - - - - - - - -
		0x08,	// - - - - @ - - -
		0x08,	// - - - - @ - - -
		0x08,	// - - - - @ - - -
		0x08,	// - - - - @ - - -
		0x08	// - - - - @ - - -
	},
	{	// [14] .
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x40,	// - @ - - - - - -
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x00	// - - - - - - - -
	},
	{	// [15] / 
		0x00,
		0x20,
		0x10,
		0x08,
		0x04,
		0x02
	},
	{	// [16] 0
		0x00,	// - - - - - - - -
		0x3e,	// - - @ @ @ @ @ -
		0x51,	// - @ - @ - - - @
		0x49,	// - @ - - @ - - @
		0x45,	// - @ - - - @ - @
		0x3e	// - - @ @ @ @ @ -
	},
	{	// [17] 1
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x42,	// - @ - - - - @ -
		0x7f,	// - @ @ @ @ @ @ @
		0x40,	// - @ - - - - - -
		0x00	// - - - - - - - -
	},
	{	// [18] 2
		0x00,	// - - - - - - - -
		0x42,	// - @ - - - - @ -
		0x61,	// - @ @ - - - - @
		0x51,	// - @ - @ - - - @
		0x49,	// - @ - - @ - - @
		0x46	// - @ - - - @ @ -
	},
	{	// [19] 3
		0x00,	// - - - - - - - - 
		0x21,	// - - @ - - - - @
		0x41,	// - @ - - - - - @
		0x45,	// - @ - - - @ - @
		0x4b,	// - @ - - @ - @ @
		0x31	// - - @ @ - - - @
	},
	{	// [20] 4
		0x00,	// - - - - - - - -
		0x38,	// - - @ @ @ - - -
		0x24,	// - - @ - - @ - -
		0x22,	// - - @ - - - @ -
		0x7f,	// - @ @ @ @ @ @ @
		0x20	// - - @ - - - - -
	},
	{	// [21] 5
		0x00,	// - - - - - - - -
		0x27,	// - - @ - - @ @ @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x31	// - - @ @ - - - @
	},
	{	// [22] 6
		0x00,	// - - - - - - - -
		0x3e,	// - - @ @ @ @ @ -
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x32	// - - @ @ - - @ - 
	},
	{	// [23] 7
		0x00,	// - - - - - - - -
		0x01,	// - - - - - - - @
		0x41,	// - @ - - - - - @
		0x31,	// - - @ @ - - - @
		0x0d,	// - - - - @ @ - @
		0x03	// - - - - - - @ @
	},
	{	// [24] 8
		0x00,	// - - - - - - - -
		0x36,	// - - @ @ - @ @ -
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x36	// - - @ @ - @ @ -
	},
	{	// [25] 9
		0x00,	// - - - - - - - -
		0x06,	// - - - - - @ @ -
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x36	// - - @ @ - @ @ -
	},
	{	// [26] :
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - - 
		0x24,	// - - @ - - @ - -
		0x00,	// - - - - - - - -
		0x00	// - - - - - - - -
	},
	{	// [27] ; 
		0x00,
		0x00,
		0x56,
		0x36,
		0x00,
		0x00
	},
	{	// [28] < 
		0x00,
		0x08,
		0x14,
		0x22,
		0x41,
		0x00
	},
	{	// [29] = 
		0x00,
		0x14,
		0x14,
		0x14,
		0x14,
		0x14
	},
	{	// [30] > 
		0x00,
		0x00,
		0x41,
		0x22,
		0x14,
		0x08
	},
	{	// [31] ? 
		0x00,
		0x02,
		0x01,
		0x51,
		0x09,
		0x06
	},
	{	// [32] @ 
		0x00,
		0x32,
		0x49,
		0x79,
		0x41,
		0x3e
	},
	{	// [33] A
		0x00,	// - - - - - - - -
		0x70,	// - @ @ @ - - - -
		0x1e,	// - - - @ @ @ @ -
		0x11,	// - - - @ - - - @
		0x1e,	// - - - @ @ @ @ -
		0x70	// - @ @ @ - - - -
	},
	{	// [34] B
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x36	// - - @ @ - @ @ -
	},
	{	// [35] C
		0x00,	// - - - - - - - -
		0x3e,	// - - @ @ @ @ @ -
		0x41,	// - @ - - - - - @
		0x41,	// - @ - - - - - @
		0x41,	// - @ - - - - - @
		0x22	// - - @ - - - @ -
	},
	{	// [36] D
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x41,	// - @ - - - - - @
		0x41,	// - @ - - - - - @
		0x22,	// - - @ - - - @ -
		0x1c	// - - - @ @ @ - -
	},
	{	// [37] E
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49	// - @ - - @ - - @
	},
	{	// [38] F
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x09,	// - - - - @ - - @
		0x09,	// - - - - @ - - @
		0x09,	// - - - - @ - - @
		0x01	// - - - - - - - @
	},
	{	// [39] G
		0x00,	// - - - - - - - -
		0x3e,	// - - @ @ @ @ @ -
		0x41,	// - @ - - - - - @
		0x41,	// - @ - - - - - @
		0x51,	// - @ - @ - - - @
		0x32	// - - @ @ - - @ -
	},
	{	// [40] H
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x08,	// - - - - @ - - -
		0x08,	// - - - - @ - - -
		0x08,	// - - - - @ - - -
		0x7f	// - @ @ @ @ @ @ @
	},
	{	// [41] I
		0x00,	// - - - - - - - -
		0x00,	// - - - - - - - -
		0x41,	// - @ - - - - - @
		0x7f,	// - @ @ @ @ @ @ @
		0x41,	// - @ - - - - - @
		0x00	// - 
	},
	{	// [42] J
		0x00,	// - - - - - - - -
		0x20,	// - - @ - - - - -
		0x40,	// - @ - - - - - -
		0x41,	// - @ - - - - - @
		0x3f,	// - - @ @ @ @ @ @
		0x01	// - - - - - - - @
	},
	{	// [43] K
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x08,	// - - - - @ - - -
		0x14,	// - - - @ - @ - -
		0x22,	// - - @ - - - @ -
		0x41	// - @ - - - - - @
	},
	{	// [44] L
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x40,	// - @ - - - - - -
		0x40,	// - @ - - - - - -
		0x40,	// - @ - - - - - -
		0x40	// - @ - - - - - -
	},
	{	// [45] M
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x02,	// - - - - - - @ -
		0x0c,	// - - - - @ @ - -
		0x02,	// - - - - - - @ -
		0x7f	// - @ @ @ @ @ @ @
	},
	{	// [46] N
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x02,	// - - - - - - @ -
		0x0c,	// - - - - @ @ - -
		0x10,	// - - - @ - - - -
		0x7f	// - @ @ @ @ @ @ @
	},
	{	// [47] O
		0x00,	// - - - - - - - -
		0x3e,	// - - @ @ @ @ @ -
		0x41,	// - @ - - - - - @
		0x41,	// - @ - - - - - @
		0x41,	// - @ - - - - - @
		0x3e	// - - @ @ @ @ @ -
	},
	{	// [48] P
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x09,	// - - - - @ - - @
		0x09,	// - - - - @ - - @
		0x09,	// - - - - @ - - @
		0x06	// - - - - - @ @ -
	},
	{	// [49] Q
		0x00,	// - - - - - - - -
		0x3e,	// - - @ @ @ @ @ -
		0x51,	// - @ - @ - - - @
		0x61,	// - @ @ - - - - @
		0x41,	// - @ - - - - - @
		0x3e	// - - @ @ @ @ @ -
	},
	{	// [50] R
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x09,	// - - - - @ - - @
		0x19,	// - - - @ @ - - @
		0x29,	// - - @ - @ - - @
		0x46	// - @ - - - @ @ -
	},
	{	// [51] S
		0x00,	// - - - - - - - -
		0x26,	// - - @ - - @ @ -
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x49,	// - @ - - @ - - @
		0x32	// - - @ @ - - @ -
	},
	{	// [52] T
		0x00,	// - - - - - - - -
		0x01,	// - - - - - - - @
		0x01,	// - - - - - - - @
		0x7f,	// - @ @ @ @ @ @ @
		0x01,	// - - - - - - - @
		0x01	// - - - - - - - @
	},
	{	// [53] U
		0x00,	// - - - - - - - -
		0x3f,	// - - @ @ @ @ @ @
		0x40,	// - @ - - - - - -
		0x40,	// - @ - - - - - -
		0x40,	// - @ - - - - - -
		0x3f	// - - @ @ @ @ @ @
	},
	{	// [54] V
		0x00,	// - - - - - - - -
		0x07,	// - - - - - @ @ @
		0x38,	// - - @ @ @ - - -
		0x40,	// - @ - - - - - -
		0x38,	// - - @ @ @ - - -
		0x07	// - - - - - @ @ @
	},
	{	// [55] W
		0x00,	// - - - - - - - -
		0x7f,	// - @ @ @ @ @ @ @
		0x20,	// - - @ - - - - -
		0x18,	// - - - @ @ - - -
		0x20,	// - - @ - - - - -
		0x7f	// - @ @ @ @ @ @ @
	},
	{	// [56] X
		0x00,	// - - - - - - - -
		0x63,	// - @ @ - - - @ @ 
		0x14,	// - - - @ - @ - -
		0x08,	// - - - - @ - - -
		0x14,	// - - - @ - @ - -
		0x63	// - @ @ - - - @ @
	},
	{	// [57] Y
		0x00,	// - - - - - - - - 
		0x03,	// - - - - - - @ @
		0x04,	// - - - - - @ - -
		0x78,	// - @ @ @ @ - - -
		0x04,	// - - - - - @ - -
		0x03	// - - - - - - @ @
	},
	{	// [58] Z
		0x00,	// - - - - - - - -
		0x61,	// - @ @ - - - - @
		0x51,	// - @ - @ - - - @
		0x49,	// - @ - - @ - - @
		0x45,	// - @ - - - @ - @
		0x43	// - @ - - - - @ @
	},
	{	// [59] [
		0x00,
		0x00,
		0x7f,
		0x41,
		0x41,
		0x00,		
	},
	{	// [60] 
		0x00,
		0x02,
		0x04,
		0x08,
		0x10,
		0x20
	},
	{	// [61] ]
		0x00,
		0x00,
		0x41,
		0x41,
		0x7f,
		0x00
	},
	{	// [62] ^
		0x00,
		0x04,
		0x02,
		0x01,
		0x02,
		0x04
	},
	{	// [63] _
		0x00,
		0x40,
		0x40,
		0x40,
		0x40,
		0x40
	},
	{	// [64] '
		0x00,
		0x00,
		0x01,
		0x02,
		0x04,
		0x00
	},
	{	// [65] a
		0x00,
		0x20,
		0x54,
		0x54,
		0x54,
		0x78
	},
	{	// [66] b
		0x00,
		0x7f,
		0x48,
		0x44,
		0x44,
		0x38,
	},
	{	// [67] c
		0x00,
		0x38,
		0x44,
		0x44,
		0x44,
		0x20,
	},
	{	// [68] d
		0x00,
		0x38,
		0x44,
		0x44,
		0x48,
		0x7f
	},
	{	// [69] e
		0x00,
		0x38,
		0x54,
		0x54,
		0x54,
		0x18
	},
	{	// [70] f
		0x00,
		0x08,
		0x7e,
		0x09,
		0x01,
		0x02
	},
	{	// [72] g
		0x00,
		0x0c,
		0x52,
		0x52,
		0x52,
		0x3e
	},
	{	// [73] h
		0x00,
		0x7f,
		0x08,
		0x04,
		0x04,
		0x78
	},
	{	// [74] i
		0x00,
		0x00,
		0x44,
		0x7d,
		0x40,
		0x00
	},
	{	// [75] j
		0x00,
		0x20,
		0x40,
		0x44,
		0x3d,
		0x00
	},
	{	// [76] k
		0x00,
		0x7f,
		0x10,
		0x28,
		0x44,
		0x00
	},
	{	// [77] l
		0x00,
		0x00,
		0x41,
		0x7f,
		0x40,
		0x00
	},
	{	// [78] m
		0x00,
		0x7c,
		0x04,
		0x18,
		0x04,
		0x78
	},
	{	// [79] n
		0x00,
		0x7c,
		0x08,
		0x04,
		0x04,
		0x78
	},
	{	// [80] o
		0x00,
		0x38,
		0x44,
		0x44,
		0x44,
		0x38
	},
	{	// [81] p
		0x00,
		0x7c,
		0x14,
		0x14,
		0x14,
		0x08
	},
	{	// [82] q
		0x00,
		0x08,
		0x14,
		0x14,
		0x14,
		0x7c
	},
	{	// [83] r
		0x00,
		0x7c,
		0x08,
		0x04,
		0x04,
		0x08
	},
	{	// [84] s
		0x00,
		0x48,
		0x54,
		0x54,
		0x54,
		0x20
	},
	{	// [85] t
		0x00,
		0x04,
		0x3f,
		0x44,
		0x40,
		0x20
	},
	{	// [86] u
		0x00,
		0x3c,
		0x40,
		0x40,
		0x20,
		0x7c
	},
	{	// [87] v
		0x00,
		0x1c,
		0x20,
		0x40,
		0x20,
		0x1c
	},
	{	// [88] w
		0x00,
		0x3c,
		0x40,
		0x30,
		0x40,
		0x3c
	},
	{	// [89] x
		0x00,
		0x44,
		0x28,
		0x10,
		0x28,
		0x44
	},
	{	// [90] y
		0x00,
		0x0c,
		0x50,
		0x50,
		0x50,
		0x3c
	},
	{	// [91] z
		0x00,
		0x44,
		0x64,
		0x54,
		0x4c,
		0x44
	}
};


/* Battery font bit */
const char batteryFontArray[3][DISPLAY_CH_ROW_SIZE * 3] = {
	{	// full
		0x00,	// - - - - - - - -
		0x18,	// - - - @ @ - - -
		0xff,	// @ @ @ @ @ @ @ @
		0x81,	// @ - - - - - - @
		0xbd,	// @ - @ @ @ @ - @
		0xbd,	// @ - @ @ @ @ - @
		0x9d,	// @ - - @ @ @ - @
		0xad,	// @ - @ - @ @ - @
		0xb5,	// @ - @ @ - @ - @
		0xb9,	// @ - @ @ @ - - @
		0x9d,	// @ - - @ @ @ - @
		0xad,	// @ - @ - @ @ - @
		0xb5,	// @ - @ @ - @ - @
		0xb9,	// @ - @ @ @ - - @
		0xbd,	// @ - @ @ @ @ - @
		0xbd,	// @ - @ @ @ @ - @
		0x81,	// @ - - - - - - @
		0xff	// @ @ @ @ @ @ @ @
	},
	{	// middle
		0x00,	// - - - - - - - -
		0x18,	// - - - @ @ - - -
		0xff,	// @ @ @ @ @ @ @ @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0xa1,	// @ - @ - - - - @
		0xb1,	// @ - @ @ - - - @
		0xb9,	// @ - @ @ @ - - @
		0x9d,	// @ - - @ @ @ - @
		0xad,	// @ - @ - @ @ - @
		0xb5,	// @ - @ @ - @ - @
		0xb9,	// @ - @ @ @ - - @
		0xbd,	// @ - @ @ @ @ - @
		0xbd,	// @ - @ @ @ @ - @
		0x81,	// @ - - - - - - @
		0xff	// @ @ @ @ @ @ @ @
	}, 
	{	// low
		0x00,	// - - - - - - - -
		0x18,	// - - - @ @ - - -
		0xff,	// @ @ @ @ @ @ @ @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0x81,	// @ - - - - - - @
		0xa1,	// @ - @ - - - - @
		0xb1,	// @ - @ @ - - - @
		0xb9,	// @ - @ @ @ - - @
		0xbd,	// @ - @ @ @ @ - @
		0xbd,	// @ - @ @ @ @ - @
		0x81,	// @ - - - - - - @
		0xff	// @ @ @ @ @ @ @ @
	}
};
		

#endif /*LCDFONT_H_*/
