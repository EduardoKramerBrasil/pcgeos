/***********************************************************************
 *
 *	Copyright (c) GeoWorks 1992 -- All Rights Reserved
 *
 * PROJECT:	  GEOS
 * MODULE:	  Kernel graphics
 * FILE:	  color.h
 *
 * AUTHOR:  	  Jim DeFrisco: Oct 23, 1992
 *
 * REVISION HISTORY:
 *	Name	  Date	    Description
 *	----	  ----	    -----------
 *	jim	  10/23/92	    Initial version
 *
 * DESCRIPTION:
 *	Color-related 
 *
 *
 * 	$Id: color.h,v 1.1 97/04/04 15:59:06 newdeal Exp $
 *
 ***********************************************************************/
#ifndef _COLOR_H_
#define _COLOR_H_

typedef ByteEnum Color;
#define C_BLACK 0
#define C_BLUE 1
#define C_GREEN 2
#define C_CYAN 3
#define C_RED 4
#define C_VIOLET 5
#define C_BROWN 6
#define C_LIGHT_GRAY 7
#define C_DARK_GRAY 8
#define C_LIGHT_BLUE 9
#define C_LIGHT_GREEN 10
#define C_LIGHT_CYAN 11
#define C_LIGHT_RED 12
#define C_LIGHT_VIOLET 13
#define C_YELLOW 14
#define C_WHITE 15

#define C_LIGHT_GREY		C_LIGHT_GRAY
#define C_DARK_GREY		C_DARK_GRAY

#define C_BW_GREY		0x84

#define C_GRAY_0 0x10
#define C_GRAY_7 0x11
#define C_GRAY_13 0x12
#define C_GRAY_20 0x13
#define C_GRAY_27 0x14
#define C_GRAY_33 0x15
#define C_GRAY_40 0x16
#define C_GRAY_47 0x17
#define C_GRAY_53 0x18
#define C_GRAY_60 0x19
#define C_GRAY_68 0x1a
#define C_GRAY_73 0x1b
#define C_GRAY_80 0x1c
#define C_GRAY_88 0x1d
#define C_GRAY_93 0x1e
#define C_GRAY_100 0x1f

#define C_UNUSED_0 0x20
#define C_UNUSED_1 0x21
#define C_UNUSED_2 0x22
#define C_UNUSED_3 0x23
#define C_UNUSED_4 0x24
#define C_UNUSED_5 0x25
#define C_UNUSED_6 0x26
#define C_UNUSED_7 0x27

#define C_R0_G0_B0 0x28
#define C_R0_G0_B1 0x29
#define C_R0_G0_B2 0x2a
#define C_R0_G0_B3 0x2b
#define C_R0_G0_B4 0x2c
#define C_R0_G0_B5 0x2d
#define C_R0_G1_B0 0x2e
#define C_R0_G1_B1 0x2f
#define C_R0_G1_B2 0x30
#define C_R0_G1_B3 0x31
#define C_R0_G1_B4 0x32
#define C_R0_G1_B5 0x33
#define C_R0_G2_B0 0x34
#define C_R0_G2_B1 0x35
#define C_R0_G2_B2 0x36
#define C_R0_G2_B3 0x37
#define C_R0_G2_B4 0x38
#define C_R0_G2_B5 0x39
#define C_R0_G3_B0 0x3a
#define C_R0_G3_B1 0x3b
#define C_R0_G3_B2 0x3c
#define C_R0_G3_B3 0x3d
#define C_R0_G3_B4 0x3e
#define C_R0_G3_B5 0x3f
#define C_R0_G4_B0 0x40
#define C_R0_G4_B1 0x41
#define C_R0_G4_B2 0x42
#define C_R0_G4_B3 0x43
#define C_R0_G4_B4 0x44
#define C_R0_G4_B5 0x45
#define C_R0_G5_B0 0x46
#define C_R0_G5_B1 0x47
#define C_R0_G5_B2 0x48
#define C_R0_G5_B3 0x49
#define C_R0_G5_B4 0x4a
#define C_R0_G5_B5 0x4b
#define C_R1_G0_B0 0x4c
#define C_R1_G0_B1 0x4d
#define C_R1_G0_B2 0x4e
#define C_R1_G0_B3 0x4f
#define C_R1_G0_B4 0x50
#define C_R1_G0_B5 0x51
#define C_R1_G1_B0 0x52
#define C_R1_G1_B1 0x53
#define C_R1_G1_B2 0x54
#define C_R1_G1_B3 0x55
#define C_R1_G1_B4 0x56
#define C_R1_G1_B5 0x57
#define C_R1_G2_B0 0x58
#define C_R1_G2_B1 0x59
#define C_R1_G2_B2 0x5a
#define C_R1_G2_B3 0x5b
#define C_R1_G2_B4 0x5c
#define C_R1_G2_B5 0x5d
#define C_R1_G3_B0 0x5e
#define C_R1_G3_B1 0x5f
#define C_R1_G3_B2 0x60
#define C_R1_G3_B3 0x61
#define C_R1_G3_B4 0x62
#define C_R1_G3_B5 0x63
#define C_R1_G4_B0 0x64
#define C_R1_G4_B1 0x65
#define C_R1_G4_B2 0x66
#define C_R1_G4_B3 0x67
#define C_R1_G4_B4 0x68
#define C_R1_G4_B5 0x69
#define C_R1_G5_B0 0x6a
#define C_R1_G5_B1 0x6b
#define C_R1_G5_B2 0x6c
#define C_R1_G5_B3 0x6d
#define C_R1_G5_B4 0x6e
#define C_R1_G5_B5 0x6f
#define C_R2_G0_B0 0x70
#define C_R2_G0_B1 0x71
#define C_R2_G0_B2 0x72
#define C_R2_G0_B3 0x73
#define C_R2_G0_B4 0x74
#define C_R2_G0_B5 0x75
#define C_R2_G1_B0 0x76
#define C_R2_G1_B1 0x77
#define C_R2_G1_B2 0x78
#define C_R2_G1_B3 0x79
#define C_R2_G1_B4 0x7a
#define C_R2_G1_B5 0x7b
#define C_R2_G2_B0 0x7c
#define C_R2_G2_B1 0x7d
#define C_R2_G2_B2 0x7e
#define C_R2_G2_B3 0x7f
#define C_R2_G2_B4 0x80
#define C_R2_G2_B5 0x81
#define C_R2_G3_B0 0x82
#define C_R2_G3_B1 0x83
#define C_R2_G3_B2 0x84
#define C_R2_G3_B3 0x85
#define C_R2_G3_B4 0x86
#define C_R2_G3_B5 0x87
#define C_R2_G4_B0 0x88
#define C_R2_G4_B1 0x89
#define C_R2_G4_B2 0x8a
#define C_R2_G4_B3 0x8b
#define C_R2_G4_B4 0x8c
#define C_R2_G4_B5 0x8d
#define C_R2_G5_B0 0x8e
#define C_R2_G5_B1 0x8f
#define C_R2_G5_B2 0x90
#define C_R2_G5_B3 0x91
#define C_R2_G5_B4 0x92
#define C_R2_G5_B5 0x93
#define C_R3_G0_B0 0x94
#define C_R3_G0_B1 0x95
#define C_R3_G0_B2 0x96
#define C_R3_G0_B3 0x97
#define C_R3_G0_B4 0x98
#define C_R3_G0_B5 0x99
#define C_R3_G1_B0 0x9a
#define C_R3_G1_B1 0x9b
#define C_R3_G1_B2 0x9c
#define C_R3_G1_B3 0x9d
#define C_R3_G1_B4 0x9e
#define C_R3_G1_B5 0x9f
#define C_R3_G2_B0 0xa0
#define C_R3_G2_B1 0xa1
#define C_R3_G2_B2 0xa2
#define C_R3_G2_B3 0xa3
#define C_R3_G2_B4 0xa4
#define C_R3_G2_B5 0xa5
#define C_R3_G3_B0 0xa6
#define C_R3_G3_B1 0xa7
#define C_R3_G3_B2 0xa8
#define C_R3_G3_B3 0xa9
#define C_R3_G3_B4 0xaa
#define C_R3_G3_B5 0xab
#define C_R3_G4_B0 0xac
#define C_R3_G4_B1 0xad
#define C_R3_G4_B2 0xae
#define C_R3_G4_B3 0xaf
#define C_R3_G4_B4 0xb0
#define C_R3_G4_B5 0xb1
#define C_R3_G5_B0 0xb2
#define C_R3_G5_B1 0xb3
#define C_R3_G5_B2 0xb4
#define C_R3_G5_B3 0xb5
#define C_R3_G5_B4 0xb6
#define C_R3_G5_B5 0xb7
#define C_R4_G0_B0 0xb8
#define C_R4_G0_B1 0xb9
#define C_R4_G0_B2 0xba
#define C_R4_G0_B3 0xbb
#define C_R4_G0_B4 0xbc
#define C_R4_G0_B5 0xbd
#define C_R4_G1_B0 0xbe
#define C_R4_G1_B1 0xbf
#define C_R4_G1_B2 0xc0
#define C_R4_G1_B3 0xc1
#define C_R4_G1_B4 0xc2
#define C_R4_G1_B5 0xc3
#define C_R4_G2_B0 0xc4
#define C_R4_G2_B1 0xc5
#define C_R4_G2_B2 0xc6
#define C_R4_G2_B3 0xc7
#define C_R4_G2_B4 0xc8
#define C_R4_G2_B5 0xc9
#define C_R4_G3_B0 0xca
#define C_R4_G3_B1 0xcb
#define C_R4_G3_B2 0xcc
#define C_R4_G3_B3 0xcd
#define C_R4_G3_B4 0xce
#define C_R4_G3_B5 0xcf
#define C_R4_G4_B0 0xd0
#define C_R4_G4_B1 0xd1
#define C_R4_G4_B2 0xd2
#define C_R4_G4_B3 0xd3
#define C_R4_G4_B4 0xd4
#define C_R4_G4_B5 0xd5
#define C_R4_G5_B0 0xd6
#define C_R4_G5_B1 0xd7
#define C_R4_G5_B2 0xd8
#define C_R4_G5_B3 0xd9
#define C_R4_G5_B4 0xda
#define C_R4_G5_B5 0xdb
#define C_R5_G0_B0 0xdc
#define C_R5_G0_B1 0xdd
#define C_R5_G0_B2 0xde
#define C_R5_G0_B3 0xdf
#define C_R5_G0_B4 0xe0
#define C_R5_G0_B5 0xe1
#define C_R5_G1_B0 0xe2
#define C_R5_G1_B1 0xe3
#define C_R5_G1_B2 0xe4
#define C_R5_G1_B3 0xe5
#define C_R5_G1_B4 0xe6
#define C_R5_G1_B5 0xe7
#define C_R5_G2_B0 0xe8
#define C_R5_G2_B1 0xe9
#define C_R5_G2_B2 0xea
#define C_R5_G2_B3 0xeb
#define C_R5_G2_B4 0xec
#define C_R5_G2_B5 0xed
#define C_R5_G3_B0 0xee
#define C_R5_G3_B1 0xef
#define C_R5_G3_B2 0xf0
#define C_R5_G3_B3 0xf1
#define C_R5_G3_B4 0xf2
#define C_R5_G3_B5 0xf3
#define C_R5_G4_B0 0xf4
#define C_R5_G4_B1 0xf5
#define C_R5_G4_B2 0xf6
#define C_R5_G4_B3 0xf7
#define C_R5_G4_B4 0xf8
#define C_R5_G4_B5 0xf9
#define C_R5_G5_B0 0xfa
#define C_R5_G5_B1 0xfb
#define C_R5_G5_B2 0xfc
#define C_R5_G5_B3 0xfd
#define C_R5_G5_B4 0xfe
#define C_R5_G5_B5 0xff

/* flags to pass to GrSetXXXXColor routines */

typedef ByteEnum ColorFlag;
#define CF_INDEX   0
#define CF_GRAY   1
#define CF_SAME   2
#define CF_CMY    3
#define CF_RGB 0x80

typedef struct {
    byte	CQ_redOrIndex;
    ColorFlag	CQ_info;
    byte	CQ_green;
    byte	CQ_blue;
} ColorQuad;

typedef dword ColorQuadAsDWord;

#define ConstructColorQuadAsDWord(redOrIndex, info, green, blue)     \
    (ColorQuadAsDWord)((((ColorQuadAsDWord)(redOrIndex)) << 24)  |   \
		       (((ColorQuadAsDWord)(info))  	 << 16)  |   \
		       (((ColorQuadAsDWord)(green)) 	 << 8)   |   \
		        ((ColorQuadAsDWord)(blue)))

/* Structures for defining color correction tables */

typedef struct {
    byte   RGBD_red;
    byte   RGBD_green;
    byte   RGBD_blue;
} RGBDelta;

typedef struct {
    RGBDelta	CT_data[125];
} ColorTransfer;

/* structure region for RGB values */

typedef dword RGBColorAsDWord;

#define RGB_RED(val) ( val & 0xff )
#define RGB_GREEN(val) ( (val >> 8) & 0xff )
#define RGB_BLUE(val) ( (val >> 16) & 0xff )
#define RGB_INDEX(val) ( (val >> 24) & 0xff )

typedef struct {
    byte	RGB_red;
    byte	RGB_green;
    byte	RGB_blue;
} RGBValue;

/* Structure of custom palette allocated by GrCreatePalette and
 * associated with windows. The default value of P_entries is 16.
 */
typedef struct {
    word P_entries;             /* # 3-byte entries in palette */
} Palette;

#endif /* _COLOR_H_ */
