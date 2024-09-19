//WAP Find out length of string without using inbuilt functio
#include<stdio.h>
main()
{
	char a[5];
	int i, len=0;
	
	printf("enter name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
		
	}
	printf("length of string : %d",len);
}
