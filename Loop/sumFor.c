
// Write a progarm that print the sum of n th time 
// which is inputed by user.

#include<stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(i = 1; i<=n; ++i){
        sum += i;
    }

    printf("Sum is : %d", sum);
    return 0;
}