
----The changes I made in archive_windows.h------------------
Line 144
#define O_SEQ		_O_SEQ

Line 168

#ifndef	_S_IFSEQ
  #define	_S_IFSEQ        0110000   /* sequential */

Line 198
#define	S_ISSEQ(m)	(((m) & S_IFMT) == S_IFSEQ)	/* sequential file */