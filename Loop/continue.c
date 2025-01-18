
// Write a progarm using continue statement>

#include<stdio.h>
int main()

{
    int i, n;
    printf("Enter the value : ");
    scanf("%d", &n);

    i = 0;

    while (i < n){

        ++i; 

        if (i == 5){
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}