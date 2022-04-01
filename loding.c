#include<stdio.h>
void main()
{
	for(int i=0;i<10;i++)
	{ 	
		for(long int x=0;x<567876;x++);
		printf("%d[",10*(i+1));
		for(int j = 0;j<10;j++)
		{	
			if(j<i)
				printf("=");
			else
				printf(".");
		}
		printf("]");
		printf("\n");
	}
}

			
