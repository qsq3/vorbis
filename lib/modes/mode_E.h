/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggVorbis SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS SOURCE IS GOVERNED BY *
 * THE GNU LESSER/LIBRARY PUBLIC LICENSE, WHICH IS INCLUDED WITH    *
 * THIS SOURCE. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.        *
 *                                                                  *
 * THE OggVorbis SOURCE CODE IS (C) COPYRIGHT 1994-2001             *
 * by the XIPHOPHORUS Company http://www.xiph.org/                  *
 *                                                                  *
 ********************************************************************

 function: predefined encoding modes
 last mod: $Id: mode_E.h,v 1.11 2001/02/18 12:05:45 xiphmont Exp $

 ********************************************************************/

#ifndef _V_MODES_E_H_
#define _V_MODES_E_H_

#include <stdio.h>
#include "vorbis/codec.h"
#include "backends.h"

#include "books/lsp12_0.vqh"
#include "books/lsp30_0.vqh"
#include "books/lsp12_1.vqh"
#include "books/lsp30_1.vqh"

#include "books/res0_256_128aux.vqh"
#include "books/res0_256_1024aux.vqh"

#include "books/res0_256_128_1.vqh"
#include "books/res0_256_128_2.vqh"
#include "books/res0_256_128_3.vqh"
#include "books/res0_256_128_4.vqh"
#include "books/res0_256_128_5.vqh"

#include "books/res0_256_1024_1.vqh"
#include "books/res0_256_1024_2.vqh"
#include "books/res0_256_1024_3.vqh"
#include "books/res0_256_1024_4.vqh"
#include "books/res0_256_1024_5.vqh"
#include "books/res0_256_1024_6.vqh"
#include "books/res0_350_1024_7.vqh"


static vorbis_info_psy _psy_set_E0={
  1,/*athp*/
  1,/*decayp*/

  -100.,
  -140.,

  8,

  /*     0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15   16   */
  /* x: 63 88 125 175 250 350 500 700 1k 1.4k 2k 2.8k 4k 5.6k 8k 11.5k 16k Hz */
  /* y: 0 10 20 30 40 50 60 70 80 90 100 dB */

   1,/* tonemaskp */
  /*  0   10   20   30   40   50   60   70   80   90   100 */
  {
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*63*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*88*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*125*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*175*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*250*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*350*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*500*/
   {-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.,-999.}, /*700*/

   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*1000*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*1400*/
   {-40.,-45.,-45.,-45.,-45.,-55.,-65.,-75.,-85.,-95.,-105.}, /*2000*/
   {-40.,-45.,-45.,-45.,-45.,-55.,-65.,-75.,-85.,-95.,-105.}, /*2800*/
   {-40.,-45.,-45.,-45.,-45.,-55.,-65.,-75.,-85.,-95.,-105.}, /*4000*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*5600*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*8000*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*11500*/
   {-40.,-40.,-40.,-40.,-40.,-50.,-60.,-70.,-80.,-90.,-100.}, /*16000*/
  },

  1,/* peakattp */
  {{-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*63*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*88*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*125*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*175*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*250*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*350*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*500*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*700*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*1000*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*1400*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*2000*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*2600*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*4000*/
   {-20.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*5600*/
   {-20.f,-22.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*8000*/
   {-20.f,-22.f,-22.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*11500*/
   {-16.f,-20.f,-22.f,-22.f,-24.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f},/*16000*/
  },

  0,/*noisemaskp */
  -20.f,  /* suppress any noise curve over maxspec+n */
  .5f,   /* low window */
  .5f,   /* high window */
  5,
  5,
  {0.f},
 
  105.f,  /* even decade + 5 is important; saves an rint() later in a
            tight loop) */
  -28.,

  -0., -.004   /* attack/decay control */
};

static vorbis_info_psy _psy_set_E={
  1,/*athp*/
  1,/*decayp*/

  -100.f,
  -140.f,

  8,

  /*     0  1  2   3   4   5   6   7   8   9  10  11  12  13  14  15   16   */
  /* x: 63 88 125 175 250 350 500 700 1k 1.4k 2k 2.8k 4k 5.6k 8k 11.5k 16k Hz */
  /* y: 0 10 20 30 40 50 60 70 80 90 100 dB */
   1,/* tonemaskp */
  /*  0   10   20   30   40   50   60   70   80   90   100 */
  {
   {-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f}, /*63*/
   {-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f}, /*88*/
   {-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f,-999.f}, /*125*/

   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*175*/
   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*250*/
   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*350*/
   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*500*/
   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*700*/

   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*1000*/
   {-40.f,-45.f,-50.f,-50.f,-50.f,-60.f,-70.f,-80.f,-90.f,-99.f,-110.f}, /*1400*/
   {-40.f,-45.f,-50.f,-50.f,-50.f,-60.f,-70.f,-80.f,-90.f,-99.f,-110.f}, /*2000*/
   {-40.f,-45.f,-50.f,-50.f,-50.f,-60.f,-70.f,-80.f,-90.f,-99.f,-110.f}, /*2800*/
   {-40.f,-45.f,-50.f,-50.f,-50.f,-60.f,-70.f,-80.f,-90.f,-99.f,-110.f}, /*4000*/
   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*5600*/

   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*8000*/
   {-40.f,-45.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*11500*/
   {-40.f,-40.f,-45.f,-45.f,-45.f,-55.f,-65.f,-75.f,-85.f,-95.f,-105.f}, /*16000*/

  },

  1,
  {{-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*63*/
   {-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*88*/
   {-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*125*/
   {-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*175*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*250*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*350*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*500*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*700*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*1000*/
   {-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*1400*/
   {-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*2000*/
   {-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*2800*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f,-28.f},/*4000*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f},/*5600*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f},/*8000*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f},/*11500*/
   {-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-26.f,-28.f,-28.f,-28.f,-28.f},/*16000*/
  },

  0,/*noisemaskp */
  -28.f,  /* suppress any noise curve over maxspec+n */
  .5f,   /* low window */
  .5f,   /* high window */
  25,
  25,
  {0.f},
 
  105.f,  /* even decade + 5 is important; saves an rint() later in a
            tight loop) */
  -32.,

  -0.f, -.004f,   /* attack/decay control */

};

/* with GNUisms, this could be short and readable. Oh well */
static vorbis_info_time0 _time_set0E={0};
static vorbis_info_floor0 _floor_set0E={12, 44100,  64, 10,130, 2, {0,1},
                                        0.199f, .285f};
static vorbis_info_floor0 _floor_set1E={30, 44100, 256, 12,150, 2, {2,3}, 
                                        .082f, .126f};
static vorbis_info_residue0 _residue_set0E={0,128,16,6,4,
					    {0,1,1,1,1,1},
					    {6,7,8,9,10},
					    
					    {0,99999,9999,9999,9999},
					    {999.f,1.5f,2.5f,6.5f,40.5f},
					    {4,4,4,4,4},
					    {99,99,99,99,99}};

static vorbis_info_residue0 _residue_set1E={0,1024, 32,8,5,
					    {0,1,1,1,1,1,1,1,1,1},
					    {11,12,13,14,15,16,17,18,19},
					   
					    {0,9999,9999,60,9999,
					     9999,9999},
					    {999.f,2.5f,4.5f,10.5f,10.5f,
					     20.5f,40.f},
					    {5,5,5,5,5,5,5},
					    {99,99,99,99,99,99,99,99,99}};

static vorbis_info_mapping0 _mapping_set0E={1, {0,0}, {0}, {0}, {0}, {0}};
static vorbis_info_mapping0 _mapping_set1E={1, {0,0}, {0}, {1}, {1}, {1}};
static vorbis_info_mode _mode_set0E={0,0,0,0};
static vorbis_info_mode _mode_set1E={1,0,0,1};

/* CD quality stereo, no channel coupling */
codec_setup_info info_E={

  /* smallblock, largeblock */
  {256, 2048}, 
  /* modes,maps,times,floors,residues,books,psys */
  2,          2,    1,     2,       2,   18,   2,
  /* modes */
  {&_mode_set0E,&_mode_set1E},
  /* maps */
  {0,0},{&_mapping_set0E,&_mapping_set1E},
  /* times */
  {0,0},{&_time_set0E},
  /* floors */
  {0,0},{&_floor_set0E,&_floor_set1E},
  /* residue */
  {0,0},{&_residue_set0E,&_residue_set1E},
  /* books */
  {&_vq_book_lsp12_0,       /* 0 */
   &_vq_book_lsp12_1,       /* 1 */
   &_vq_book_lsp30_0,      /* 2 */
   &_vq_book_lsp30_1,      /* 3 */

   &_huff_book_res0_256_128aux,
   &_huff_book_res0_256_1024aux,

   &_vq_book_res0_256_128_1,
   &_vq_book_res0_256_128_2,
   &_vq_book_res0_256_128_3,
   &_vq_book_res0_256_128_4,
   &_vq_book_res0_256_128_5,

   &_vq_book_res0_256_1024_1,
   &_vq_book_res0_256_1024_2,
   &_vq_book_res0_256_1024_3,
   &_vq_book_res0_256_1024_4,
   &_vq_book_res0_256_1024_5,
   &_vq_book_res0_256_1024_6,
   &_vq_book_res0_350_1024_7,

  },
  /* psy */
  {&_psy_set_E0,&_psy_set_E},

  /* thresh sample period, preecho clamp trigger threshhold, range, minenergy */
  256, {26.f,26.f,26.f,30.f}, {-36.f,-36.f,-36.f,-36.f}, -90.f,
  
  -10., 

  0,
};

#define PREDEF_INFO_MAX 0

#endif
