#include<stdio.h>

main()
{
	int n,n1;
	printf("enter number 1: ");
	scanf("%d", &n);
	printf("enter number 2: ");
	scanf("%d", &n1);
	
	if(n>n1)
	{
		printf("%d is greater than %d",n,n1);
	}
	else
	{
		printf("%d is greater than %d",n1,n);
	}
}
