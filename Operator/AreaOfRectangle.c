
// Write a program that prints the area of rectangle

#include<stdio.h>
int main()

{
    int lenth, width;

    printf("Enter the lenth and width of a rectangle : ");
    scanf("%d %d", &lenth, &width);

    int area;
    area = lenth * width;

    printf("The area of the rectangle is : %d", area);

    return 0;
    
}