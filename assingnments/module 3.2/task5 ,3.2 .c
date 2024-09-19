//WAP to print factorial of given number
#include<stdio.h>
main()
{
	int n,fact=1,i=1;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("factorial number is: %d",fact);
	
	
	
}
