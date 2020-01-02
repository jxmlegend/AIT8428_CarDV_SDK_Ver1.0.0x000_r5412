/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V3.96.
*        Compiled Jul 19 2005, 13:50:35
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: Icon_Sound_Off
* Dimensions:  32 * 32
* NumColors:   4
*
**********************************************************************
*/

#include "stdlib.h"

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_Sound_Off[] = {
     0xAA50FF,0x606060,0xF8F8F8,0x0020C0
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_Sound_Off = {
  4,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_Sound_Off[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_Sound_Off[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x40, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x64, 0x01, 0xD0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x69, 0x47, 0x40, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x66, 0x9D, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x65, 0x75, 0x40, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x65, 0xD6, 0x90, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x67, 0x41, 0x90, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x5D, 0x00, 0x50, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x10, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xD4, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x64, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1D, 0x64, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x05, 0x75, 0x64, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x59, 0xDA, 0x64, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x67, 0x6A, 0xA4, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x9D, 0xAA, 0xA4, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x76, 0xAA, 0xA4, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xDA, 0xAA, 0x90, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x5A, 0xA9, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x1D, 0x05, 0x54, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_Sound_Off = {
  32, /* XSize */
  32, /* YSize */
  8, /* BytesPerLine */
  2, /* BitsPerPixel */
  acIcon_Sound_Off,  /* Pointer to picture data (indices) */
  &PalIcon_Sound_Off  /* Pointer to palette */
};

/* *** End of file *** */