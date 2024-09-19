//WAP to print table up to given numbers 

#include<stdio.h>
main()
{
	int n,i,odd=0,sumodcount=0;
	printf("\nenter a number : ");
	scanf("%d",&n);
	
	printf("\ntable of number from 1 to %d :",n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		
	}
	printf("\n");
	
	printf("\nsum of odd number up to %d : \n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			
		}
		else
		{
			printf("\neven number = %d",odd);
			sumodcount=sumodcount+odd;
		}
	}
    printf("\nsum  : %d",sumodcount);
}
