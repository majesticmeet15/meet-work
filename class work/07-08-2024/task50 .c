#include<stdio.h>
union myunoin{
	int a[4];
	int b[4];
	int i;
	int j;
	int tem;
}s1,s2,s3,s4;

main()
{
	for(s3.i=1;s3.i<4;s3.i++)
	{
		printf("enter numbers : ");
		scanf("%d",&s1.a[4]);	
	}
	for(s3.i=0;s3.i<4;s3.i++)
	{
		for(s3.j=i+1;s3.j<4;s3.j++)
		{
			s4.tem=s1.a[i];
			s1.a[i]=s2.a[j];
			s2.a[j]=s4.tem;	
		}
	}
	for(s3.i=0;s3.i<4;s3.i++)
	{
		printf("dec order : %d",s1.a[i]);
	}
	
}
