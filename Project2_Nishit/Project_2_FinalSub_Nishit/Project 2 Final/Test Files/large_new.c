/* Header Files */

#include <stdio.h>
#include <unistd.h>
#include <lib.h>

/* MACROS 	*/

#define LOOP1 1000
#define LOOP2 1000000
#define READ 0

/* Main Function */

int main()
{
	//Variable Declerations

	unsigned long *val;	
	unsigned long long k,i,j;	

	//Initializing Pointer to some value
	
	*val=10;

	// Computations

	for(i=0;i<LOOP1;i++)
	{
		for(j=0;j<LOOP2;j++)

		{
			k= i*976*(j+1)*456;

		}
	}

	// Printing the BC value
	printf("\n Large Program : ");
	
	bcctl ( getpid(), val , READ);
}


/*-----------------------------------------------------------
	Testing Purpose

	//		check=bcctl ( getpid(), val,2);
		//	if(check== -1)
			//	break;
		//	else
			//	continue;
------------------------------------------------------------*/
