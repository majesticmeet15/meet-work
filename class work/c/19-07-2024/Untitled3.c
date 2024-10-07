#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("**************welcome to the game*************\n");
	
	while (1) //infinite loop
	{
		int n=rand()%50+1;  // original number
		printf("%d",n);
		 
		printf("\n***enter number between 1 to 50***\n");
		
		int choice;
		
		printf("\n enter number : ");
		scanf("%d",&choice);
		
		if(choice>50) // if input number is greater than 50
		{
			printf("\ninvalid number !!");
			break;
		}
		else if (choice==n) // entered number is correct amd matches with original number 
		{
			printf("you have won !!");
			break;
		}
		else if (choice<n) //entered number is smaller than original number  
		{
			printf("%d is smaller than the number ",choice);
			
		}
		else // entered number in greater than the original number 
		{
			printf("%d is greater than the number ",choice);
		}
	}
	
}
