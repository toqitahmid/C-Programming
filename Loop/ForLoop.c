
// Write a program that print from one to ten using for loop

#include<stdio.h>
int main()

{
    int n, i;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i = 1; i <= 10; ++i)
    {
        printf("%d\n", i);
    }

    return 0;
}