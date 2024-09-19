#include<stdio.h>
main()
{
	char a[5],b[5];
	
	printf("enter string 1 : ");
	gets(a);
	printf("enter string 2 : ");
	gets(b);
	
	printf("string concat is : %s",strcat(a,b));
}
