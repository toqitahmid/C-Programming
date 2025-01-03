// Write a program that convert lower case letter into upper case letter 
// using toupper function

#include<stdio.h>
#include<ctype.h>

int main()

{

    char lower, upper;

    printf("Enter any lower case letter : ");
    scanf("%c", &lower);

    upper = toupper(lower);

    printf("The upper case letter is : %c", upper);

    return 0;

}