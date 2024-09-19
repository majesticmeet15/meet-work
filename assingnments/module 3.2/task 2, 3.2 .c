//? WAP to make simple calculator (operation include Addition, Subtraction, 
//Multiplication, Division, modulo) 
#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("enter number 1 : ");
	scanf("%d",&n1);
	printf("enter number 2 : ");
	scanf("%d",&n2);
	
	printf("\n 1 and 2 addition: %d",n1+n2);
	printf("\n 1 and 2 subtraction: %d",n1-n2);
	printf("\n 1 and 2 multiplication: %d",n1*n2);
	printf("\n 1 and 2 division: %.2f",(float)n1/n2);
	printf("\n 1 and 2 modulo: %d", n1%n2);
	
	
	
	
	    
}
