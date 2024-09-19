//Patterns:
#include<stdio.h> //TRIANGLE 
main()
{
	int i,k,j;
	int n=5,z=1;
	
	for(i=0;i<n;i++) //row
	{
		for(k=0;k<=n-i-1;k++) // space 
		{
			printf("  ");
		}
		for(j=1;j<=z;j++)  //coloum 
		{
			printf(" *");
		}
		printf("\n");
		z +=2;
	}
}
