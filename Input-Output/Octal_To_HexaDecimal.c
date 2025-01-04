
// Write a programm that convet octal number into hexa-decimal number

#include<stdio.h>
int main()

{

    int number;

    printf("Enter any octal number : ");
    scanf("%o", &number);

    printf("The hexa-decimal number is : %x", number);

    return 0;

}