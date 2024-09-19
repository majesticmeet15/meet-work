//WAP to swap two numbers without using third variable 
#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter number 1 : ");
	scanf("%d", &a);
	
	printf("enter number 2 : ");
	scanf("%d", &b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("\nafter swapping value A: %d" ,a);
	printf("\nafter swapping value B: %d" ,b);
}
