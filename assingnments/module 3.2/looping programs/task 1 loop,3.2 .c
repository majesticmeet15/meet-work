//WAP to take 10 no. Input from user and find out … 
// How many Even numbers are there 
// How many odd numbers are there 
// Sum of even numbers 
// Sum of odd numbers 
#include<stdio.h>
main()
{
	int n,i=1,ev=0,od=0,evcount=0,odcount=0;
	
	while(i<=10)
	{
		printf("\nEnter number : ");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			printf("\n%d is even",n);
			ev++;
			evcount=evcount+n;
		}
		else
		{
			printf("\n%d is odd",n);
			od++;
			odcount=odcount+n;
		}
		i++;
	}
	printf("\nsum of even : %d",ev);
	printf("\nsum of odd : %d",od);
	printf("\nsum of evencount : %d",evcount);
	printf("\nsum od oddcount : %d",odcount);
}
