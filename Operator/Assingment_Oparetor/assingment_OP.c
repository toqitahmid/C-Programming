
// Write a program that show some assingment example

#include<stdio.h>
int main()

{
    int apple = 4, orrange = 7;
    int beg = 0;

    beg += (apple + orrange);
    printf("Now, the number of total fruits is = %d \n", beg);

    int beg2 = 5;
    beg2 -= (orrange - apple);
    printf("You have only %d orranges \n", beg2);

    int beg3 = 2;
    beg3 *= (apple + orrange);
    printf("The number of fruit you have = %d\n", beg3);

    int beg4 = 9;
    beg4 /= (orrange - apple);
    printf("Now everyone have only %d fruits", beg4);

    return 0;
}