#include<stdio.h>
main()
{
	int a[4];
	int b[4];
	int i,n;
	
	int sum=0;
	
	for(i=0;i<4;i++)
	{
		printf("\n enter elements : ");
		scanf("%d",&a[i]);
	
		sum = sum+a[i];
	}
	for(i=0;i<4;i++)
	{
		printf("\n enter elements : ");
		scanf("%d",&b[n]);
	
		sum = sum+b[n];
	}
	for(i=0;i<4;i++)
	{
		printf("\n elements are : %d",a[i]);
		printf("\n elements are : %d",b[n]);
	}
	printf("\n sum of value is : %d",sum);
	
}
