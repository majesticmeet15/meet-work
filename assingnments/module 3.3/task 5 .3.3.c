////WAP of Addition, Subtraction, Multiplication and Division using Switch 
//case.(Must Be Menu Driven) 
#include <stdio.h>
main()
{
    int choice;
    float n1, n2, result;
 
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice)
   {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f",&n1,&n2);
            result =n1+n2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f",&n1,&n2);
            result =n1-n2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f",&n1,&n2);
            result =n1*n2;
            printf("Result: %.2f\n", result);
            break;
        case 4:    
            printf("Enter two numbers: ");
            scanf("%f %f",&n1,&n2);
            if (n2 != 0) 
			{
                result =n1/n2;
                printf("Result: %.2f\n", result);
            } 
			else
			 {
                printf("invalid\n");
            }
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:  
            printf("Invalid choice! Please enter a number between 1 and 5\n");
    }
}

