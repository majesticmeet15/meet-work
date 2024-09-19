//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char a[10],b[10];
//	int i,j,sum=0,sum1=0;
//	
//	printf("\nenter string 1 ;");
//	gets(a);
//	printf("\nenter string 2 ;");
//	gets(b);
//	
//	for(i=0;a[i]!='\0';i++)
//	{
//		sum=sum+a[i];
//	}
//	for(j=0;b[j]!='\0';j++)
//	{
//		sum1=sum1+b[j];
//	}
//	printf("\nsum of string A : %d",sum);
//	printf("\nsum of string B :%d",sum1);
//	printf("\ncompariosin of string is : %d",strcmp(a,b));
//}







#include<stdio.h>
main()
{
	char a[10];
	int i,len=0;
	
	printf("enter name : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("length of string is : %d",len);
}



//#include<stdio.h>
//main()
//{
//	char a[10],b[10];
//	int i;
//	
//	printf("enter name :");
//	gets(a);
//	
//	for(i=0;a[i]!='\0';i++)
//	{
//        b[i]=a[i];	
//	}
//	b[i]='\0';
//	
//	printf("copy string is : %s",a);
//	
//}



//#include<stdio.h>
//main()
//{
//	char a[10],b[10];
//	int i,f;
//	
//	printf("enter name : ");
//	gets(a);
//	printf("enter name : ");
//	gets(b);
//	
//	for (i=0;a[i]!='\0';i++);
//	for(f=0;b[f]!='\0';f++)
//	{
//		a[i]=b[f];
//		i++;
//	}
//	a[i]='\0';
//	
//	printf("string is :%s",a);
//	
//	
//}
