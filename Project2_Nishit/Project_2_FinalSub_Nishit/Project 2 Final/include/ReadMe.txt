Note : 
If you are using Notepad, you can see the line numbers by clicking on --> View -->Status Bar. Now you'll be able to view the 
line numbers, bottom right corner.

// The lines which I've edited corresponding to the files are mentioned below

callnr.h 	Line 68
This defines the number for the system call.
BCCTL 69

com.h		Line 355
SYS_BCCTL (KERNEL_CALL + 57)
This adds an additional kernel call, i.e KERNEL call number 57

syslib.h	Line 248
Prototype for sys_bcctl
The prototype for sys_bcctl is defined here.

unistd.h	Line 88
Prototype for BCCTL
The prototype for bcctl function is described here.