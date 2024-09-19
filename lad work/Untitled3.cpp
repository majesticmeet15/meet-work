#include<stdio.h>
#include<string.h>
main()
{
	char a[12],b[10];
	int i,j;
	int sum=0,sum1=0;
	printf("enter name: ");
	gets(a);
	printf("enter name: ");
	gets(b);
	
	for(i=0;a[i]!='\0';i++)
	{
		sum=sum+a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		sum1=sum1+b[j];
	}
	printf("\nsum of A :%d",sum);
	printf("\nsum of B :%d",sum1);
	printf("\nstring comparision is : %d",strcmp(a,b));
	
	
}





















































//#include<stdio.h>
//main()
//{
//	char a[120],b[120];
//	int i,j;
//	
//	printf("enter name : ");
//	gets(a);
//	printf("enter name ");
//	gets(b);
//	
//	for(i=0;a[i]!='\0';i++);
//	for(j=0;b[j]!='\0';j++)
//	{
//		a[i]=b[j];
//		i++;
//	}
//	a[i]='\0';
//	printf("string concat is : %s",a);
//}

