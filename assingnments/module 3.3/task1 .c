//WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice
#include<stdio.h>
main()
{
	int a[5];
	int i,j;
	int temp;
	
	for(i=1;i<5;i++)
	{
		printf("enter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<5;i++)
	{
		printf("\n asc order : %d \n",a[i]);
	}
	



	int b[4];
	int n,k;
	int temt;
	
	for(n=0;n<4;n++)
	{
		printf("enter elements : ");
		scanf("%d",&b[n]);
	}
	for(n=0;n<4;n++)
	{
		for(k=n+1;k<4;k++)
		{
			if (b[n]<b[k])
			{
				temt=b[n];
				b[n]=b[k];
				b[k]=temt;
			}
		}
	}
	for(n=0;n<4;n++)
	{
		printf("\n dec order : %d ",b[n]);
	}
	
}
