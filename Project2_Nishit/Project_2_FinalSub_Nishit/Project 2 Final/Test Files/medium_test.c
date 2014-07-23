// Header Files

#include<stdio.h>
#include<math.h>
#include<unistd.h>

#define READ 0
#define LOOPMED 50
#define LOOPLAR 1000
// Main Function

void main()
{
	
	float num1,num2,add,sub,div,mul;
	int i,j,l, array1[3][3], array2[3][3], array3[3][3];
	unsigned long * val;
	*val=10;

	//Inputting numbers
	printf("\n Enter num1 and num2 : " );
	scanf ("%f", &num1);
	scanf ("%f", &num2);

	// Computation on numbers

	for(i=0;i<LOOPMED;i++)
	{	
			add = num1 + num2 ;
			sub = num1 - num2 ;
			div = num1 / num2 ;
			mul = num1 * num2 ;
	}
	
	// Random Computation
	
	for(l=0;l<LOOPLAR;l++)
	{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if(i==j)
						array1[i][j]=1;
					else
						array1[i][j]=0;
				}
			}

			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					if (i==0)
						array2[i][j] = j+1;
					else
					{
						if (i==1)
							array2[i][j] = (j*j*2)+i;
						else
							array2[i][j] = (j*i*2)-i;
					}	
				}
			}
	
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					array3[i][j] = array1[i][j] * array2[j][i];
			
				}
			}
	}

	printf("\n Array 1 is : \n ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",array1[i][j]);
			
		}
		printf("\n");
	}

	printf("\n Array 2 is : \n ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",array2[i][j]);
			
		}
		printf("\n");
	}

	printf("\n Array 3 is : \n ");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",array3[i][j]);
			
		}
		printf("\n");
	}

	printf("\n Mediun Program : ");

 	bcctl (getpid(), val ,READ);	
}
