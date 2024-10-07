#include<stdio.h>

fac() //function defination
{
	int n,i,fac=1;
	printf("\nenter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac*1;
		
	}
	printf("\nfactorial number : %d",fac);
}
add()
{
	int a,b;
	printf("\nenter A : ");
	scanf("%d",&a);
	printf("\nenter B : ");
	scanf("%d",&b);
	printf("\naddition : %d",a+b);
}
sub()
{
	int a,b;
	printf("\nenter A :");
	scanf("%d",&a);
	printf("\nenter B :");
	scanf("%d",&b);
	printf("\nsubtraction : %d",a-b);
	
}
mul()
{
	int a,b;
	
	printf("\nenter A : ");
	scanf("%d",&a);
	
	printf("\nenter B : ");
	scanf("%d",&b);
	
	printf("\nmultiplication : %d",a*b );
}

main()
{
	fac(); //function calling 
	add();
	sub();
	mul();
}
