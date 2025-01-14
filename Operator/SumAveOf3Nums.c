
// Write a program that prints the sum and average 
// of 3 numbers

#include<stdio.h>
int main()

{
    
    int num1, num2, num3;
    int sum;

    printf("Enter three(3) numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1+num2+num3;
    printf("The addition of the three numbers is : %d\n", sum);

    int ave;
    ave = sum/3;

    printf("And The average of the 3 numbers is : %d", ave);

    return 0;

}