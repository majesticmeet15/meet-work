#include<stdio.h>
main()
{
	char a[5],b[5];
	int i;
	
	printf("enter name : ");
	gets(a);
	
	strcpy(b,a);
	
	printf("copy string is : %s",b);
	
}
