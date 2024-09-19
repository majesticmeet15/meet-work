#include<stdio.h>
main()
{
	int a[4],b[4];
	int i;
	
	
	for(i=0;i<4;i++)
	{
		printf("\n enter elements : ");
		scanf("%d",&a[i]);
	
		
	}
	for(i=0;i<4;i++)
	{
		printf("\n elements are : %d",a[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\n enter elements : ");
		scanf("%d",&b[i]);	
	}
	for(i=0;i<4;i++)
	{
		printf("\n elements are : %d",b[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\naddition : %d",a[i]+b[i]);
	}
	
	
}
