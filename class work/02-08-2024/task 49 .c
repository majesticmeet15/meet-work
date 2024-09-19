#include<stdio.h>

fun(int n) //parameters 
{
	int i,fac=1;

	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	return fac;
}
add(int n1,int n2)
{	
	return n1+n2;	
}

main()
{
	//int result = fun();
	//printf ("%d",result):
	
	printf("%d\n",fun(5));
	printf("%d\n",add(10,20));
	
}
