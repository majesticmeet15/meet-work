//Write a program to find out the max from given number (E.g., No: -1562 
//Max number is 6)
#include <stdio.h>

int main() 
{
    int number, maxdigit = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    // Convert number to positive if it's negative
    if (number < 0) {
        number = -number;
    }

    // Loop through each digit of the number
    while (number > 0) {
        int digit = number % 10; 
        if (digit > maxdigit) {
            maxdigit = digit;    
        }
        number /= 10;  // Remove the last digit
    }

    // Print the maximum digit
    printf("Max digit is: %d\n", maxdigit);
   
}
