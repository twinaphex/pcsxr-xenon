/***************************************************************************
                           cfg.c  -  description
                             -------------------
    begin                : Sun Mar 08 2009
    copyright            : (C) 1999-2009 by Pete Bernert
    web                  : www.pbernert.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version. See also the license.txt file for *
 *   additional informations.                                              *
 *                                                                         *
 ***************************************************************************/

//*************************************************************************//
// History of changes:
//
// 2009/03/08 - Pete
// - generic cleanup for the Peops release
//
//*************************************************************************//

#define _IN_CFG

#include "stdafx.h"
#include "externals.h"
#include "cfg.h"

BOOL bGteAccuracy; 

namespace xegpu {

    

    void ReadConfig(void) // read config (linux file)
    {
        iResX = 1280;
        iResY = 720;
        bGteAccuracy = FALSE; //bGteAccuracy = TRUE;
        bFullVRam = FALSE;
        
//         0: None
//         1: Standard - Glitches will happen
//         2: Extended - Removes black borders
//         3: Standard w/o Sprites - unfiltered 2D
//         4: Extended w/o Sprites - unfiltered 2D
//         5: Standard + smoothed Sprites
//         6: Extended + smoothed Sprites      
        iFilterType = 0;
        
        bDrawDither = FALSE;
        bUseLines = FALSE;
        bUseFrameLimit = FALSE;//bUseFrameLimit = TRUE;
        bUseFrameSkip = FALSE;
        iFrameLimit = 2;
        fFrameRate = 200.0f;
        iOffscreenDrawing = 2; //2: Standard - OK for most games
        bOpaquePass = FALSE;//TRUE
        //bOpaquePass = TRUE;//TRUE
        iTexQuality = 4; // 4 - B8 G8 R8 A8 - Slightly faster with some cards | 3 - R8 G8 B8 A8 - Best colors, more ram needed
        iUseMask = TRUE;
        iZBufferDepth = 16;
        bUseFastMdec = TRUE;
        dwCfgFixes = 0;
        bUseFixes = FALSE;
        
//         0: Emulated vram - effects need FVP
//         1: Black - Fast but no special effects
//         2: Gfx card buffer - Can be slow
//         3: Gfx card buffer & software - slow        
        iFrameTexType = 2;
        
//        0: Emulated vram - OK for most games
//        1: Gfx card buffer reads
//        2: Gfx card buffer moves
//        3: Gfx card buffer reads & moves
//        4: Full software drawing (FVP)
        iFrameReadType = 3;
        
        bUse15bitMdec = FALSE;
        iShowFPS = 0;
        bKeepRatio = FALSE;
        iScanBlend = 0;
        iVRamSize = 256;
        iTexGarbageCollection = 1;
        iBlurBuffer = 0;
        iHiResTextures = 0; //0: None (standard) ,1: 2xSaI (much vram needed) ,2: Stretched (filtering needed)

        if (iUseMask) iZBufferDepth = 16; // set zbuffer depth
        else iZBufferDepth = 0;
        
        
        /**
         * ff7
         */
        bUseFixes = TRUE;
        dwCfgFixes = 0x1;//f7 fixe
        if (bUseFixes) dwActFixes = dwCfgFixes; // init game fix global
    }

}