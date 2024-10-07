#include<stdio.h>
main()
{
	int i=1,n,fac=0;
	printf("enter number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{ 
		fac=fac+i;
		i++;
	}
	printf("factorial number is %d",fac);
	
}
