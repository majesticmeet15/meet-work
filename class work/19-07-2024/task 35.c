#include<stdio.h>
main()
{
	int n1=0,n2=1,n,i; //fibonacci series task 
	
	printf(" enter terms : "); 
	scanf("%d",&n);
	
	printf("%d",n1);
	printf("\n%d",n2);
	
	for(i=3;i<=n;i++)
	{
		int n3=n1+n2;
		
		printf("\n%d",n3);
		n1 = n2; //swapping 
		n2 = n3; //swapping 
		
	}
}
