#include<stdio.h>
main()
{
	int a[5],b[5];
	int i;
	
	printf("enter name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i--)
	{
		b[i]=a[i];
		
	}
	b[i]='\0';
	
	printf ("copy sring is : %s",b[i]);
	
}
