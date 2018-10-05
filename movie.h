/***********************************************************************************
  Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.

  (c) Copyright 1996 - 2002  Gary Henderson (gary.henderson@ntlworld.com),
                             Jerremy Koot (jkoot@snes9x.com)

  (c) Copyright 2002 - 2004  Matthew Kendora

  (c) Copyright 2002 - 2005  Peter Bortas (peter@bortas.org)

  (c) Copyright 2004 - 2005  Joel Yliluoma (http://iki.fi/bisqwit/)

  (c) Copyright 2001 - 2006  John Weidman (jweidman@slip.net)

  (c) Copyright 2002 - 2006  funkyass (funkyass@spam.shaw.ca),
                             Kris Bleakley (codeviolation@hotmail.com)

  (c) Copyright 2002 - 2010  Brad Jorsch (anomie@users.sourceforge.net),
                             Nach (n-a-c-h@users.sourceforge.net),

  (c) Copyright 2002 - 2011  zones (kasumitokoduck@yahoo.com)

  (c) Copyright 2006 - 2007  nitsuja

  (c) Copyright 2009 - 2018  BearOso,
                             OV2

  (c) Copyright 2017         qwertymodo

  (c) Copyright 2011 - 2017  Hans-Kristian Arntzen,
                             Daniel De Matteis
                             (Under no circumstances will commercial rights be given)


  BS-X C emulator code
  (c) Copyright 2005 - 2006  Dreamer Nom,
                             zones

  C4 x86 assembler and some C emulation code
  (c) Copyright 2000 - 2003  _Demo_ (_demo_@zsnes.com),
                             Nach,
                             zsKnight (zsknight@zsnes.com)

  C4 C++ code
  (c) Copyright 2003 - 2006  Brad Jorsch,
                             Nach

  DSP-1 emulator code
  (c) Copyright 1998 - 2006  _Demo_,
                             Andreas Naive (andreasnaive@gmail.com),
                             Gary Henderson,
                             Ivar (ivar@snes9x.com),
                             John Weidman,
                             Kris Bleakley,
                             Matthew Kendora,
                             Nach,
                             neviksti (neviksti@hotmail.com)

  DSP-2 emulator code
  (c) Copyright 2003         John Weidman,
                             Kris Bleakley,
                             Lord Nightmare (lord_nightmare@users.sourceforge.net),
                             Matthew Kendora,
                             neviksti

  DSP-3 emulator code
  (c) Copyright 2003 - 2006  John Weidman,
                             Kris Bleakley,
                             Lancer,
                             z80 gaiden

  DSP-4 emulator code
  (c) Copyright 2004 - 2006  Dreamer Nom,
                             John Weidman,
                             Kris Bleakley,
                             Nach,
                             z80 gaiden

  OBC1 emulator code
  (c) Copyright 2001 - 2004  zsKnight,
                             pagefault (pagefault@zsnes.com),
                             Kris Bleakley
                             Ported from x86 assembler to C by sanmaiwashi

  SPC7110 and RTC C++ emulator code used in 1.39-1.51
  (c) Copyright 2002         Matthew Kendora with research by
                             zsKnight,
                             John Weidman,
                             Dark Force

  SPC7110 and RTC C++ emulator code used in 1.52+
  (c) Copyright 2009         byuu,
                             neviksti

  S-DD1 C emulator code
  (c) Copyright 2003         Brad Jorsch with research by
                             Andreas Naive,
                             John Weidman

  S-RTC C emulator code
  (c) Copyright 2001 - 2006  byuu,
                             John Weidman

  ST010 C++ emulator code
  (c) Copyright 2003         Feather,
                             John Weidman,
                             Kris Bleakley,
                             Matthew Kendora

  Super FX x86 assembler emulator code
  (c) Copyright 1998 - 2003  _Demo_,
                             pagefault,
                             zsKnight

  Super FX C emulator code
  (c) Copyright 1997 - 1999  Ivar,
                             Gary Henderson,
                             John Weidman

  Sound emulator code used in 1.5-1.51
  (c) Copyright 1998 - 2003  Brad Martin
  (c) Copyright 1998 - 2006  Charles Bilyue'

  Sound emulator code used in 1.52+
  (c) Copyright 2004 - 2007  Shay Green (gblargg@gmail.com)

  S-SMP emulator code used in 1.54+
  (c) Copyright 2016         byuu

  SH assembler code partly based on x86 assembler code
  (c) Copyright 2002 - 2004  Marcus Comstedt (marcus@mc.pp.se)

  2xSaI filter
  (c) Copyright 1999 - 2001  Derek Liauw Kie Fa

  HQ2x, HQ3x, HQ4x filters
  (c) Copyright 2003         Maxim Stepin (maxim@hiend3d.com)

  NTSC filter
  (c) Copyright 2006 - 2007  Shay Green

  GTK+ GUI code
  (c) Copyright 2004 - 2018  BearOso

  Win32 GUI code
  (c) Copyright 2003 - 2006  blip,
                             funkyass,
                             Matthew Kendora,
                             Nach,
                             nitsuja
  (c) Copyright 2009 - 2018  OV2

  Mac OS GUI code
  (c) Copyright 1998 - 2001  John Stiles
  (c) Copyright 2001 - 2011  zones

  Libretro port
  (c) Copyright 2011 - 2017  Hans-Kristian Arntzen,
                             Daniel De Matteis
                             (Under no circumstances will commercial rights be given)


  Specific ports contains the works of other authors. See headers in
  individual files.


  Snes9x homepage: http://www.snes9x.com/

  Permission to use, copy, modify and/or distribute Snes9x in both binary
  and source form, for non-commercial purposes, is hereby granted without
  fee, providing that this license information and copyright notice appear
  with all copies and any derived work.

  This software is provided 'as-is', without any express or implied
  warranty. In no event shall the authors be held liable for any damages
  arising from the use of this software or it's derivatives.

  Snes9x is freeware for PERSONAL USE only. Commercial users should
  seek permission of the copyright holders first. Commercial use includes,
  but is not limited to, charging money for Snes9x or software derived from
  Snes9x, including Snes9x or derivatives in commercial game bundles, and/or
  using Snes9x as a promotion for your commercial product.

  The copyright holders request that bug fixes and improvements to the code
  should be forwarded to them so everyone can benefit from the modifications
  in future versions.

  Super NES and Super Nintendo Entertainment System are trademarks of
  Nintendo Co., Limited and its subsidiary companies.
 ***********************************************************************************/


#ifndef _MOVIE_H_
#define _MOVIE_H_

#define MOVIE_OPT_FROM_SNAPSHOT		0
#define MOVIE_OPT_FROM_RESET		(1 << 0)
#define MOVIE_OPT_PAL				(1 << 1)
#define MOVIE_OPT_NOSAVEDATA		(1 << 2)
#define MOVIE_SYNC_DATA_EXISTS		0x01
#define MOVIE_SYNC_OBSOLETE			0x02
#define MOVIE_SYNC_VOLUMEENVX		0x08
#define MOVIE_SYNC_FAKEMUTE			0x10
#define MOVIE_SYNC_HASROMINFO		0x40
#define MOVIE_SYNC_NOCPUSHUTDOWN	0x80
#define MOVIE_MAX_METADATA			512

#define CONTROLLER_DATA_SIZE		2
#define MOUSE_DATA_SIZE				5
#define SCOPE_DATA_SIZE				6
#define JUSTIFIER_DATA_SIZE			11

struct MovieInfo
{
	time_t	TimeCreated;
	uint32	Version;
	uint32	LengthFrames;
	uint32	LengthSamples;
	uint32	RerecordCount;
	uint8	Opts;
	uint8	ControllersMask;
	uint8	SyncFlags;
	bool8	ReadOnly;
	uint8	PortType[2];
	wchar_t	Metadata[MOVIE_MAX_METADATA];
	uint32	ROMCRC32;
	char	ROMName[23];
};

// methods used by the user-interface code
int S9xMovieOpen (const char *, bool8);
int S9xMovieCreate (const char *, uint8, uint8, const wchar_t *, int);
int S9xMovieGetInfo (const char *, struct MovieInfo *);
void S9xMovieStop (bool8);
void S9xMovieToggleRecState (void);
void S9xMovieToggleFrameDisplay (void);
const char * S9xChooseMovieFilename (bool8);

// methods used by the emulation
void S9xMovieInit (void);
void S9xMovieShutdown (void);
void S9xMovieUpdate (bool a = true);
void S9xMovieUpdateOnReset (void);
void S9xUpdateFrameCounter (int o = 0);
void S9xMovieFreeze (uint8 **, uint32 *);
int S9xMovieUnfreeze (uint8 *, uint32);

// accessor functions
bool8 S9xMovieActive (void);
bool8 S9xMoviePlaying (void);
bool8 S9xMovieRecording (void);
bool8 S9xMovieFinished (void);
bool8 S9xMovieReadOnly (void);
bool8 S9xMovieSetReadOnly (bool8 readonly);
uint8 S9xMovieControllers (void);
uint32 S9xMovieGetId (void);
uint32 S9xMovieGetLength (void);
uint32 S9xMovieGetFrameCounter (void);
uint32 S9xMovieGetRerecordCount (void);
uint32 S9xMovieSetRerecordCount (uint32 newRerecordCount);
bool8 S9xMovieGetRerecordCountSkip (void);
bool8 S9xMovieSetRerecordCountSkip (bool8 newSkipRerecordCount);
const char *S9xMovieGetFilename (void);

uint16 MovieGetJoypad (int);
void MovieSetJoypad (int, uint16, uint16 mask = ~0);
bool MovieGetMouse (int, uint8 d[MOUSE_DATA_SIZE]);
void MovieSetMouse (int, uint8 d[MOUSE_DATA_SIZE], bool);
bool MovieGetScope (int, uint8 d[SCOPE_DATA_SIZE]);
void MovieSetScope (int, uint8 d[SCOPE_DATA_SIZE]);
bool MovieGetJustifier (int, uint8 d[JUSTIFIER_DATA_SIZE]);
void MovieSetJustifier (int, uint8 d[JUSTIFIER_DATA_SIZE]);
void MovieApplyNextInput(void);

#endif
