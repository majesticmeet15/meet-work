#include<stdio.h>
main()
{
	int a[2][3],b[2][3];
	int i,j;
	
	printf("\n***elements for A***");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter elements[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n***elements for B***");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter elements [%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n***additon***");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n%d\t",a[i][j]+b[i][j]);
			
		}
		printf("\n");
	}
	printf("\n***subtraction***");
	
	for(i=1;i<2;i++)
	{
		for(j=1;j<3;j++)
		{
			printf("\n%d\t",a[i][j]-b[i][j]);
			
		}
		printf("\n");
		break;
	}

}
