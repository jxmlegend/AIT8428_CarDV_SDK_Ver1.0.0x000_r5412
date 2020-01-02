/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V5.04.
*        Compiled Jan  8 2010, 16:46:31
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: selectBar
* Dimensions:  150 * 5
* NumColors:   0
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif


static GUI_CONST_STORAGE unsigned short acselectBar[] = {
  0x0BFF, 0x0BFF, 0x07FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x07FF, 0x0BFF, 0x0BFF,
  0x0BFF, 0x0BFF, 0x07FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x07FF, 0x0BFF, 0x0BFF,
  0x0BFF, 0x0BFF, 0x07FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x07FF, 0x0BFF, 0x0BFF,
  0x0BFF, 0x0BFF, 0x07FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x07FF, 0x0BFF, 0x0BFF,
  0x0BFF, 0x0BFF, 0x07FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 
        0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x03FF, 0x07FF, 0x0BFF, 0x0BFF
};

GUI_CONST_STORAGE GUI_BITMAP bmselectBar = {
  150, /* XSize */
  5, /* YSize */
  300, /* BytesPerLine */
  16, /* BitsPerPixel */
  (unsigned char *)acselectBar,  /* Pointer to picture data */
  NULL  /* Pointer to palette */
 ,GUI_DRAW_BMP555
};

/* *** End of file *** */
