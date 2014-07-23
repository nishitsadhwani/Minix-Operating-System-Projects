/*
**************************************************************************

Name : Nishit Sadhwani
UFID : 5393-5598
Description :
I've made this testtq.c file to test the system call that I've implemented.
It includes the header file "unistd.h" because that header file contains the
prototype of the function bcctl(), it also includes "stdio.h" for functions
like printf() and scanf().
It then defines the macros for modes i.e. read, reset and increment.
It is a menu driven program, which asks the user for mode of operation,
and then calls the function bcctl() accordingly with it's parameters.
At the end this program prints the call status to the console and ask's the user
if he/she wants to continue doing operations on the variable BC.
The program continues till the user answers 'y' || 'Y'

**************************************************************************
*/

#include<unistd.h>
#include<stdio.h>
#include<lib.h>

#define READ_BC 	0
#define RESET_BC 	1
#define INCREMENT_BC  	2 

void main()
{
	int call_status, * bc_ptr, random_var=10, choice, pid;
	
	bc_ptr=&random_var;
	char ans;	
	pid=getpid();

	do
	{
	printf("\nEnter the value of mode\n1. READ\n2. RESET\n3.INCREMENT\n");

	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			printf ("\n Its' a READ operation " );
	
			call_status=bcctl(pid, bc_ptr , READ_BC);

			break;

		case 2: 
			printf("\n It's a RESET operation, before resetting ");

			call_status=bcctl(pid, bc_ptr , RESET_BC);

			break;

		case 3: 

			printf("\n It's an INCREMENT operation ");

			call_status=bcctl(pid, bc_ptr ,INCREMENT_BC);

			break;

		default :
			call_status=-1;	
			printf("\n Wrong Choice ");
	}


	printf("\n Call Status (Success = 0 ,Not Success = -1 ):\t %d\n",call_status);
	
	printf("\n Do you wish to continue (y/n) ?");
	
	scanf("%s",&ans);

}	while(ans=='y' | ans=='Y');

}
