
// Write a program that also prints using
//  more of library function like rond(), trunc(), ceil() and floor() etc

#include<stdio.h>
#include<math.h>

int main()
    
{
    double x = 5.30, result, result2, result3, result4;
    result = round(x);
    printf("The value of x using round function is = %.2lf\n", result);

    result2 = trunc(x);
    printf("The value of x using trunc function is = %.2lf\n", result2);

    result3 = ceil(x);
    printf("The value of x using ceil function is = %.2lf\n", result3);

    result4 = floor(x);
    printf("The value of x using floor function is = %.2lf\n", result4);

    return 0;

}