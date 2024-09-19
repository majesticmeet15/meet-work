#include<stdio.h>
struct mystructure{
	int a,b;
}s1;

main()
{
	//struct mystructure s1; //variable of structure 
	
	printf ("enter number 1 : ");
	scanf("%d",&s1.a);
	printf ("enter number 2 : ");
	scanf("%d",&s1.b);
	
	printf("addition : %d",s1.a+s1.b);
	
}
