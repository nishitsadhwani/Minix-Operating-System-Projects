#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<lib.h>

#define F_DISP_ALL_DATA	   12   /* for displaying the all data */
#define F_DISP_ONLY_DATA   13   /* for displaying the only data */
#define F_LOGICAL_BLOCK	   14   /* for displaying the logical block */
#define F_PHYSICAL_BLOCK   15   /* for displaying the physical block */

void main()
{
	int menu_choice , disp_choice;
	static int rschoice;
	char ans;
	int fd;			//File Descriptor
	int status;		//Status Of Call
	int size, bytes_writ, bytes_read, br;
	char * buffer,*path,*c,* rbuffer;
	printf("\n Enter the file type you want to work with (Regular (0) / Sequential (1) :");
	scanf("%d",&rschoice);
	do
	{
	//	printf("\n rs choice : %d",rschoice);
		printf("\n Additional Menu :");
		printf("\n----------------------------------");
		printf("\n 1. Create ");
		printf("\n 2. Delete ");
		printf("\n 3. Write  ");
		printf("\n 4. Read   ");
		printf("\n 5. Check File Statistics ");
		printf("\n 6. Display ");
		printf("\n----------------------------------");
		printf("\n Enter Your Choice :");
		scanf("%d",&menu_choice);

		switch(menu_choice)
		{
			case 1: printf("\n Create Mode ");
				if(rschoice==0)	
				  fd=creat("/home/project/prooo.txt", 0755,rschoice );
				else
				  fd=creat("/home/project/proo.seq",0755,rschoice);
				/*
				  if(fd==-1)
				    printf("\n File is already created ");
				  else
				    printf("\n File Created.....");
				*/
			break;
			
			case 2: printf("\n Delete Mode ");
				if(rschoice==0)	
				  unlink("/home/project/prooo.txt");
			        else
				  unlink("/home/project/proo.seq");
			break;
			
			case 3: printf("\n Write Mode  ");
			  	printf("\n rs choice : %d ",rschoice);			
				if(rschoice==0)
				{	printf("\n------");
					printf("\n Enter The Size :");
					scanf("%d",&size);
					c=(char *) malloc(10);
					buffer = (char *) malloc(size);
					gets(c);
					printf("\n Enter the buffer ");
					gets(buffer);
					fd=open("/home/project/prooo.txt",1);
					bytes_writ=write(fd,buffer,size);
					printf("\n Bytes Written :%d",bytes_writ);
					printf("\n******");
					free(buffer);
					close(fd);
				}
			  	else	
				{
					printf("\n ()()()");
					printf("\n Enter The Size :");
					scanf("%d",&size);
					c=(char *) malloc(10);
					buffer = (char *) malloc(size);
					gets(c);
					printf("\n Enter the buffer ");
					gets(buffer);
					fd=open("/home/project/proo.seq",1);
					bytes_writ=write(fd,buffer,size);
					printf("\n Bytes Written :%d",bytes_writ);
					printf("\n******");
					free(buffer);
					close(fd);
				
				}
			printf("\n fd = %d ",fd);

			break;
			
			case 4: printf("\n Read Mode   ");
			
				if(rschoice==0)
				{
					fd=open("/home/project/prooo.txt",0);
					printf("\n Enter the number of bytes to read :");
					scanf("%d",&br);
					rbuffer=(char *) malloc (br);
					bytes_read=read(fd,rbuffer,br);
					puts(rbuffer);
					printf("\n Number of bytes read :%d", bytes_read);
				}
				else
				{
					
					printf("\n ()()()");
					fd=open("/home/project/proo.seq",0);
					printf("\n Enter the number of bytes to read :");
					scanf("%d",&br);
					rbuffer=(char *) malloc (br);
					bytes_read=read(fd,rbuffer,br);
					puts(rbuffer);
					printf("\n Number of bytes read :%d", bytes_read);
				}
			break;
			
			case 5: printf("\n Check statistics mode ");
			//	stat prooo4.txt;
			break;
			
			case 6: printf("\n Display Mode ");
				printf("\n--------------------------");
				printf("\n Display Menu	");
				printf("\n--------------------------");
				printf("\n 1. Contents ");
				printf("\n 2. Logical Block Num ");
				printf("\n 3. Physical Block Num ");
				printf("\n--------------------------");
				printf("\n Enter display choice :");
				scanf("%d",&disp_choice);
				switch(disp_choice)
				{
					case 1: printf("\n Contents ");
						static int type;
						printf("\n 1. All Contents ");
						printf("\n 2. Just Data ");
						scanf("%d", &type);
						switch(type)
						{
							case 1 : 
								if(rschoice==0)
								{
									printf("\n All Contents- Regular ");
						
									fd=open("/home/project/prooo.txt",0);
									fcntl(fd, F_DISP_ALL_DATA);
								}
								else
								{
									printf("\n All Contents- Sequential ");
									fd=open("/home/project/proo.seq",0);	
									fcntl(fd, F_DISP_ALL_DATA);
								}
							break;
							case 2 : 
								if(rschoice==0)
								{
									printf("\n Just Data - Regular ");
									fd=open("/home/project/prooo.txt",0);
									fcntl(fd, F_DISP_ONLY_DATA);	
								}
								else
								{
									printf("\n Just Data - Sequential ");
									fd=open("/home/project/proo.seq",0);
									fcntl(fd, F_DISP_ONLY_DATA);	
								}
							break;	
							default:
								printf("\n Wrong Contents Choice");
						}	
					break;
					
					case 2: printf("\n Logical  ");
						if(rschoice==0)
						{
							printf("\n Logical - Regular ");
							fd=open("/home/project/prooo.txt",0);
							fcntl(fd, F_LOGICAL_BLOCK);	
						}
						else
						{
							printf("\n Logical - Sequential ");
							fd=open("/home/project/proo.seq",0);	
							fcntl(fd, F_LOGICAL_BLOCK);
						}
					break;
					
					case 3: printf("\n Physical ");
						if(rschoice==0)
						{
							printf("\n Physical - Regular ");
							fd=open("/home/project/prooo.txt",0);	
							fcntl(fd, F_PHYSICAL_BLOCK);
						}
						else
						{
							printf("\n Physical - Sequential ");
							fd=open("/home/project/proo.seq",0);
							fcntl(fd, F_PHYSICAL_BLOCK);	
						}
					break;
					default:
						printf("\n Wrong Display Choice");
				}
				break;
			default :
				printf("\n Wrong mode ");
		}
		printf("\n Do you wish to continue ? (y/N) ");
		scanf("%s",&ans);	

	}while(ans=='y' || ans =='Y');
}
