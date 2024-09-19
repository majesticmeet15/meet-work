#include<stdio.h>

main()
{
	int a,b,tem; //data members
	
	printf("enter number 1 : ");
	scanf("%d", &a);
	
	printf("/nEnter number 2 : ");
	scanf("%d", &b);
	//30,25
	tem = a; //tem=30
	a = b; //a=25
	b = tem; //b=30
	printf("/nafter swapping value A: %d" ,a);
	printf("/nafter swapping value B: %d" ,b);
	
	
}
