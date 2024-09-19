#include<stdio.h>

fun()
{
	int n,i,fac=1;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*i;
	}
	return fac;
}
add()
{
	int n,n1;
	printf("enter number 1 : ");
	scanf("%d",n);
	printf("enter number 2 : ");
	scanf("%d",n1);
	
	return n+n1;
	
}

main()
{
	//int result = fun();
	//printf ("%d",result):
	
	printf("%d",fun());
	printf("%d",add());
	
}
