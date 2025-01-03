
// Wirte a program that convert lower case letter into upper case

#include<stdio.h>
int main()

{

    char lower;

    printf("Enter any lower case letter : ");
    scanf("%c", &lower);

    printf("The upper case letter is : %c", lower-32);

    return 0;

}