#include <stdio.h>

int main() {
    int number, max_digit = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    // Convert number to positive if it's negative
    if (number < 0) {
        number = -number;
    }

    // Loop through each digit of the number
    while (number > 0) {
        int digit = number % 10;  // Get the last digit
        if (digit > max_digit) {
            max_digit = digit;    // Update max_digit if this digit is larger
        }
        number /= 10;  // Remove the last digit
    }

    // Print the maximum digit
    printf("Max digit is: %d\n", max_digit);

    return 0;
}
