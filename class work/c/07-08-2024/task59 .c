#include<stdio.h>
union myunion{
	int a;
	int b;
	int i;
	
}s1,s2,s3;

main()
{
	printf("enter number 1 : ");
	scanf("%d",&s1.a);
	printf("enter number 2 : ");
	scanf("%d",&s2.b);
	
	printf("subtraction is : %d",s1.a-s2.b);
	

	
}
