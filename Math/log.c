
// Write a program that prints using library function like 
// log(), log10(), exp(), sin() and etc.. 

#include<stdio.h>
#include<math.h>

int main()
    
{

    double number = 10, result;
    result = log(number);
    printf("The value of the log(%.2lf) is = %.4lf\n", number, result);


    double number2 = 10, result2;
    result2 = log10(number2);
    printf("The value of the log10(%.2lf) is = %.4lf\n", number2, result2);


    double number3 = 1, result3;
    result3 = exp(number3); 
    printf("The value of the exp(%.2lf) is = %.4lf\n", number3, result3);


    double number4 = 0.35, result4;
    result4 = sin(number4);
    printf("The value of the exp(%.2lf) is = %.4lf\n", number4, result4);
   
    
    return 0;

}