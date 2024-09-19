//Patterns: side triangle 
#include<stdio.h>  
main()
{
	int i,j;
	for(i=0;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		
		}
		printf("\n");
	}
	
	for(i=0;i<=6;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" *");
		
		}
		printf("\n");
	}
}
	
