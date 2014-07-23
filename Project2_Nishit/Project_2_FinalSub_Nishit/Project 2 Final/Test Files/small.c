/* Header Files */

#include<stdio.h>
#include<unistd.h>
#include<lib.h>

#define READ 0
// Main Function

void main()
{
	char a[5][5];
	int i,j=0,number;
	unsigned long * val;

	//Enter the number of employees

	printf("\n Enter the number of employees (Max 5)");
	scanf("%d", &number );

	*val=10;
	
	//Storing Values of Employees

	for(i=0;i<number;i++)
	{
			
					printf("\n Enter the employee code :" );
					scanf("%s", &a[i][j]);
					printf("\n Enter the employee name :" );
					scanf("%s", &a[i][j+1]);
					printf("\n Enter the gender :" );
					scanf("%s", &a[i][j+2]);
					printf("\n Enter the age :" );
					scanf("%s", &a[i][j+3]);
					printf("\n Enter the salary :");
					scanf("%s", &a[i][j+4]);

		
			
	}
	
	// Printing the BC value
		
			printf("\n Small Program I/O :");

			bcctl ( getpid(), val,READ);
}
			
