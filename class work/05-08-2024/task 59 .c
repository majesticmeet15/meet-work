#include<stdio.h>
struct mystruct {
	int a[5],b[5];
}s1;


main()
{
	printf ("enter number 1 : ");
	scanf("%d",&s1.a[5]);
	printf ("enter number 2 : ");
	scanf("%d",&s1.b[5]);
	
	printf("addition : %d",s1.a[5]+s1.b[5]);
	
}
