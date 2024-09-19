//WAP to find number is even or odd using ternary operator
#include<stdio.h>

main()
{
	int n;
	
	printf("enter number 1: ");
	scanf("%d",&n);
	
    if(n==0)
    {
    	printf("number is zero");
	}
	else if
	(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}	
}
