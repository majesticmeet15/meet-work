//WAP to find factorial using recursion
#include<stdio.h>

fac() 
{
	int n,i,fact=1;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		
	}
	printf("\nfactorial number : %d",fact);
}
main()
{
	fac();
}
