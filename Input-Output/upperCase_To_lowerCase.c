
// Write a program that convert upper case letter into lower case letter.

#include<stdio.h>
int main()

{

    int upper;

    printf("Enter any upper case letter : ");
    scanf("%c", &upper);

    printf("The lower case letter is : %c", upper+32);

    return 0;
    
}