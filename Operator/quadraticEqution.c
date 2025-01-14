
// Write a program that prints a quadratic eqution

#include<stdio.h>
#include<math.h>

int main()

{
    float a, b, c;

    printf("Enter the value of a : ");
    scanf("%f", &a);

    printf("Enter the value of  : ");
    scanf("%f", &b);
    
    printf("Enter the value of c : ");
    scanf("%f", &c);

    float d = sqrt(b*b - 4*a*c);
    float x1, x2;

    x1 = (-b+d)/2*a;
    x2 = (-b-d)/2*a;

    printf("x1 is : %.2f\n", x1);
    printf("x2 is : %.2f", x2);

}