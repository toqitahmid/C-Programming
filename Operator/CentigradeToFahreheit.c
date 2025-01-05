
// Write a programm that convert 
// centigrade tempareture into fahrenhiet.

#include<stdio.h>
int main()

{
    float centigrade;

    printf("Enter the centigrade tempareture : ");
    scanf("%f", &centigrade);

    float fahrenhiet = ((9.0/5.0)*centigrade)+32.0;
    printf("The Fahenhiet tempareture is : %.2f", fahrenhiet);

    return 0;

}