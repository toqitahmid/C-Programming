
// Write a program using do while loop>

#include<stdio.h>
int main()

{
    int number, sum = 0;

    do{
        
        printf("Enter any integer number : ");
        scanf("%d", &number);

        sum += number;
    }

    while (number != 0);

    printf("The sum is : %d", sum);
    return 0;
}