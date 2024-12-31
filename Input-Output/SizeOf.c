
// Wirte a programm that prints the size of data types.

#include<stdio.h>

int main()

{
    int SizeOfint = sizeof(int);
    int SizeOffloat = sizeof(float);
    int SizeOfdouble = sizeof(double);
    int SizeOfchar = sizeof(char);

    printf("The size of integer datatype is : %d bytes \n", SizeOfint);
    printf("The size of float datatype is : %d bytes \n", SizeOffloat);
    printf("The size of double datatype is : %d bytes \n", SizeOfdouble);
    printf("The size of character datatype is : %d byte \n", SizeOfchar);

    return 0;

}