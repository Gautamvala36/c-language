#include <stdio.h>

void main()
{
    int num1 = 500, num2 = 200, tamp;

    tamp = num1;
    num1 = num2;
    num2 = tamp;

    printf("Enter the Value of num1 : %d", num1);
    printf("\nEnter the value of num2 : %d", num2);
}