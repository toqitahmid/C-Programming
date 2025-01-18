
// Write a program that print the sum n th time 
// Which is inputed by user.

#include<stdio.h>
int main()

{
     int i, n, sum;
     printf("Enter the value of n : ");
     scanf("%d", &n);

     i = 1;

     while (i <= n){

        sum += i;
        ++i;
     }

     printf("The sum is : %d", sum);
     return 0;
}