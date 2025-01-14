
// Write a program that prints the area of a traingle.

#include<stdio.h>
int main()

{
    
    int hight, base;

    printf("Enter the hight and base of a tringle : ");
    scanf("%d %d", &hight, &base);

    int area; 
    area = (hight*base) * 0.5;

    printf("The area of the traingle is : %d", area);

    return 0;

}