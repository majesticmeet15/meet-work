//Patterns:
#include<stdio.h> //1
                 //2 3
main()            
{
	int i=1,j=1,n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",n);
		    n++;
		}
		printf("\n");
	}
	
}
