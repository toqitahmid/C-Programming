
// Write a program that prints the area of a traingle 
// using user input.

#include<stdio.h>
#include<math.h>

int main()

{

    float hand1, hand2, hand3;

    printf("Enter the hand1 value : ");
    scanf("%f", &hand1);

    printf("Enter the hand2 value : ");
    scanf("%f", &hand2);
    
    printf("Enter the hand3 value : ");
    scanf("%f", &hand3);

    float s;
    s = (hand1+hand2+hand3)/2;

    float area;
    area = sqrt(s * (s-hand1) * (s-hand2) * (s-hand3));

    printf("The area of the tringle is : %.2f", area);

    return 0; 

}