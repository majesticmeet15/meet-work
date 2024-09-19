//WAP to find area of circle, rectangle and triangle
#include<stdio.h>
circle()  //circle
{
	float radius, area;
    
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);
    
    
    printf("Area of Circle = %.2f cm \n", area = 3.14 * radius * radius);
}
rect()    // rectangle
{
	float length, width, area;
    printf("\nEnter length of Rectangle: ");
    scanf("%f", &length);
    printf("\nEnter width of Rectangle: ");
    scanf("%f",&width);
    
    
    printf("Area of Rectangle = %.3f cm \n", area = length * width);
}
tri()   //triangle    
{
	float base, hieght, area;
	printf("\nEnter width of base of triangle : ");
	scanf("%f",&base);
	printf("\nEnter lenght of hieght of triangle :");
	scanf("%f",&base);
	
	printf("Area of triangle = %.4f ", area = 0.5 * base * hieght);
}


main()
{
	circle();
	rect();
	tri();
}
