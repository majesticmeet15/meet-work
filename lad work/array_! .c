//#include<stdio.h>
//main()
//{
//	
//}













#include<stdio.h>

main()
{
	int a[4],b[4];
	int i;
	
	for(i=0;i<=3;i++)
	{
		printf("\n enter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\nelements are : %d",a[i]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\n enter elements : ");
		scanf("%d",&b[i]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\n elements are : %d",b[i]);
	}
	for(i=0;i<=3;i++)
	{
		printf("\n Addition : %d ",a[i]+b[i]);
	}
}
