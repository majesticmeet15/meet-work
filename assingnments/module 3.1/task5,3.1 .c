//WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int year;
	printf("enter years: ");
	scanf("%d", &year);
	
	if(year%4==0)
	{
		printf("\nthis is a leap year");
		
	}
	else 
	{
		printf("not a leap year");
	}

}
