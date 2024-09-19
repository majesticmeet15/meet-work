#include<stdio.h>
main()
{
	char a[10],b[10];
	int i,j;
	
	printf("enter name :");
	gets(a);
	printf("enter name :");
	gets(b);
	 
	for (i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	
	printf("string concat is : %s",a);
	
}














































//#include <stdio.h>
//main()
//{
//	char a[20],b[20];
//	int i,f;
//	
//	printf("enter name : ");
//	gets(a);
//	printf("enter name : ");
//	gets(b);
//	
//	for (i=0;a[i]!='\0';i++);
//	for (f=0;b[f]!='\0';f++)
//	{
//		a[i]=b[f];
//		i++;	
//	}
//	a[i]='\0';
//	
//	printf("string concat : %s",a);
//	
//	
//	
//}
