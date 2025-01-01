
// Wirte a program that gets an user input using fgets

#include<stdio.h>
int main()

{
    char name[20];

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);

    printf("Assalamulaikum ");
    puts(name);

    return 0;

}