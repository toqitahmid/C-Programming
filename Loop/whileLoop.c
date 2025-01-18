
// Write a progarm that prints number using while loop

#include<stdio.h>
int main()

{
     int i, n;

     printf("Enter the value of n : ");
     scanf("%d", &n);

     i = 1;

     while (i <= n){
        
        printf("%d\n", i);
        ++i;
     }

     return 0;
}