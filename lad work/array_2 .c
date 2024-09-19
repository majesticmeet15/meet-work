#include<stdio.h>
main()
{
	int a[4];
	int i,sum=0;
	
	for(i=1;i<5;i++)
	{
	   printf("enter element : ");
	   scanf("%d",&a[i]);
	   sum= sum+ a[i];
	}
	for(i=1;i<5;i++)
	{
		printf("\nenter elements are : %d",a[i]);	
	}
	printf("\naddition is : %d ",sum);
	
	
}
