#include<stdio.h>
main()
{
	int a[4];
	int i,j;
	int temp;
	
	for(i=0;i<4;i++)
	{
		printf("enter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("\n dec order : %d ",a[i]);
	}
	
}
