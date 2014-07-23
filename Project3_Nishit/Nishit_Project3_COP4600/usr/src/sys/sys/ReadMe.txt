----The changes I have made in stat.h are :

Line 143
#define _S_IFSEQ  0110000		/* sequential */

Line 158
#define S_IFSEQ  _S_IFSEQ

Line 176
#define S_ISSEQ(m)	(((m) & _S_IFMT) == _S_IFSEQ)   /* sequential file */


----The changes I have made in fcntl.h are :

Line 99
#define O_SEQ	       020000	/* Sequential flag */

Line 130
#define F_DISP_ALL_DATA	   12   /* for displaying the all data */
#define F_DISP_ONLY_DATA   13   /* for displaying the only data */
#define F_LOGICAL_BLOCK	   14   /* for displaying the logical block */
#define F_PHYSICAL_BLOCK   15   /* for displaying the physical block */

Line 206
int	creat(const char *, mode_t, int); // Added a int variable to creat

