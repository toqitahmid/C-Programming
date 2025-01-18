
// Write a progarm using switch case

#include<stdio.h>
int main()

{
    int number;

    printf("Enter any integer number : ");
    scanf("%d", &number);

    switch (number) {

        case 0 : 

        printf("Zero");
        break;

        case 1 :

        printf("One");
        break;

        case 2 : 

        printf("Tow");
        break;

        case 3 : 

        printf("Three");
        break;

        case 4 : 

        printf("Four");
        break;

        case 5 : 

        printf("Five");
        break;

        
        default : 
        printf("This is not a valid digit!");


    }

    return 0;
}