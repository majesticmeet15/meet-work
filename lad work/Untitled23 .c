#include <stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<=4;i++)
	{
		for(k=0;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
		printf(" *");
		}
		printf("\n");
	}
}
