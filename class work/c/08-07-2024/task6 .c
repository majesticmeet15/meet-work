#include<stdio.h>

main()
{
	int age;
	printf("enter age : ");
	scanf("%d", &age);
	
	if(age>=100)
	{
		printf("invalid age ");
	}
	else if(age>=18)
	{
		printf("valid age");
	}
	else
	{
		printf("not valid");
		
	}
}


