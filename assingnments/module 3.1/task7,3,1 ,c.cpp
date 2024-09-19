// WAP to find simple interest
#include <stdio.h>
main()  
{
    float pa,r,t,simint;
    
    printf("Enter the amount : ");
    scanf("%f",&pa);
	    
    printf("Enter the rate %: ");
    scanf("%f",&r);

    printf("Enter the timew : ");
    scanf("%f",&t);
	    
    simint =(pa*r*t) / 100;

    printf("The Simple Interest is: %.2f\n",simint);
}
