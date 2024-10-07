#include<stdio.h>
main()
{
	int i,n,fac=1;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
		//1=1*1
		//1=1*2
		//2=2*3	
	}
	printf("factorial number is : %d",fac);
}
