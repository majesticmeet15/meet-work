//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main() 
{
    int num,sum=0;

    printf("Enter numbers: ");
    scanf("%d",&num);

    if (num<0) 
	{
        num= -num;
    }

    while (num>0)
    {
        sum +=num%10; 
        num /=10;       
    }

    printf("Sum of the numbers is: %d\n", sum);

}
