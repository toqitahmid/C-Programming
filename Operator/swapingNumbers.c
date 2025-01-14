
// Write a porgram that can do swap two numbers

#include<stdio.h>
int main()

{
    
    int apple, orange;

    printf("Enter ther first number : ");
    scanf("%d", &apple);

    printf("Enter the secon number : ");
    scanf("%d", &orange);

    int tree;

    tree = apple;
    apple = orange;
    orange = tree;

    printf("Now The first number is : %d\n", apple);
    printf("And The second number is : %d", orange);

    return 0;

}