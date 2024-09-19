#include<stdio.h>

fac() //function defination
{
	int n,i,fac=1;
	printf("\nenter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
		
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
	int choice;
	
	printf("\npress 1 for Factorial");
	printf("\npress 2 for Addition");
	printf("\npress 3 for Subtraction");
	printf("\npress 4 for Multiplication");
	printf("\npress 5 for Exit\n");
	
	while(1)
	{
		printf("\nenter choice : ");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			fac();
			
		}
		else if(choice==2)
		{
			add();
			
		}
		else if(choice==3)
		{
			sub();
			
		}
		else if(choice==4)
		{
			mul();
			
		}
		else if (choice==5)
		{
			printf("thank you !!!");
			break;
			
		}
		else
		{
			printf("invalid input *#*");
			break;
		}	
	}
}
