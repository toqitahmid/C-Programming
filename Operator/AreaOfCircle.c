
// Write a program that prints the area of an circle.

#include<stdio.h>
int main()

{
    float redius, pie;
    pie = 3.1415;

    printf("Enter the redius of a circle : ");
    scanf("%f", &redius);

    float area; 
    area = (pie * (redius * redius));

    printf("The area of the circle is : %.2f\n", area);

    return 0;
}