/*
**************************************************************************
Name : Nishit Sadhwani
UFID : 5393-5598
Project 1 Description :
This is the library file, which has the libary fuction which takes in process ID, 
a pointer and mode as parameters. m.m1_i1 and m.m1_i3 are global and can be 
accessed from anywhere.They store the value of process id and the mode respectively.
There is a printf statement , which I used just to understand the functioning
and working of the process. I also used it for testing purpose.
The pointer receives the vaLue of BC and then the value is printed.
return 0 is for the successful call, else the _syscall function will 
automatically return -1, if there is an error.
**************************************************************************


**************************************************************************
			Main Function Body
**************************************************************************
*/

#include<stdio.h>
#include<unistd.h>
#include<lib.h>

#define READ 0

int bcctl( pid_t pro, unsigned long * val, int mode )
{
	message m;
	m.m1_i2= pro;
	m.m1_i3= mode;

	*val=_syscall ( PM_PROC_NR, BCCTL,&m);
	if(mode==READ)
	{
		if((*val) >= 0)		
		{
	
			printf("\n BC value is : %ul ", *val);

			return 0;
		}
		else
		{
			return -1;	
		}
	}
	else
	{
		if((*val) >= 0)
			return 0;
		else
			return -1;
	}
}


/*
***********************************************************************
		 Testing and Debugging
***********************************************************************
int bcctl( int mode )
{

printf("\n Mode value : %d ", mode); 
message m;
m.m1_i1=mode;
printf("\n In libc \n VALUE here is : %d \n",m.m1_i1);	
//mode=mode+1;
	return(_syscall( PM_PROC_NR,BCCTL,&m));
//	printf("\n In /usr/src/lib/libc/sys-minix/bcctl.c \n Values are\n PID :%d \nMode :%d \n", m.m1_i1, m.m1_i3);

}*/
