
// Write a programm that prints a massage

#include<stdio.h>
int main()

{

    char name[20];

    printf("Enter Your name : ");
    fgets(name, sizeof(name), stdin);

    printf("Assalamulaikum! %s", name);

    return 0;

}