
// Write a program that convert fahrenheit tempareture 
// into centigrade temapareture.

#include<stdio.h>
int main()

{
    float fahrenheit;

    printf("Enter the fahrenhiet tempateture : ");
    scanf("%f", &fahrenheit);

    float centigrade = (fahrenheit - 32.0) * (5.0/9.0);

    printf("The centigrade temapreture is : %.2f", centigrade);

    return 0;
}