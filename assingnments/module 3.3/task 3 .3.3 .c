//WAP to show difference between Structure and Union. 
#include<stdio.h>
struct mystructure{
	int a,b;
}s1;//in structure we take 1 variable for as many data members 

main()
{ 
	
	printf ("enter number 1 : ");
	scanf("%d",&s1.a);
	printf ("enter number 2 : ");
	scanf("%d",&s1.b);
	
	printf("addition : %d",s1.a+s1.b);

 union myunion{
	int a;
	int b;
	int i;
	
}s1,s2;//and in union we take different variables for each data member


	printf("\nenter number 1 : ");
	scanf("%d",&s1.a);
	printf("enter number 2 : ");
	scanf("%d",&s2.b);
	
	printf("subtraction : %d",s1.a-s2.b);
}
