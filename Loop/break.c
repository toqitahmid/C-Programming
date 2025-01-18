
// Write a program using break statement

#include<stdio.h>
int main()

{
    int n, i;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    i = 1;

    while (i <= n){

        printf("%d\n", i);
        ++i;

        if(i == 5){
            break;
        }
    }

    return 0;
}