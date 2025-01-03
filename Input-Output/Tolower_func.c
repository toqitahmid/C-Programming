
// Write a program that convert upper case letter into lower case letter
// using Tolower function

#include<stdio.h>
#include<ctype.h>

int main()
    
{
    char lower, upper;

    printf("Enter any upper case letter : ");
    scanf("%c", &upper);

    lower = tolower(upper);

    printf("The lower case letter is : %c", lower);

    return 0;

}