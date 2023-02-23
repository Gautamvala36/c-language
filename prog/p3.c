// write a program to print following pattern
// 2,1,3,4,7,11,18,29,47,76,123,...,3220

#include <stdio.h>

void main()
{
    int num1 = 2, num2 = 1, temp = 0;

    printf("%d %d ", num1, num2);
    for (temp = 0; num2 < 3220;temp++)
    {
        num1 = num1 + num2;
        printf("%d ", num1);
        num2 = num1 + num2;
        printf("%d ", num2);
    }
    // num1=num1+num2;
    // printf("%d ",num1);
    // num2=num1+num2;
    // printf("%d ",num2);
    // num1=num1+num2;
    // printf("%d ",num1);
    // num2=num1+num2;
    // printf("%d ",num2);
    // num1=num1+num2;
    // printf("%d ",num1);
    // num2=num1+num2;
    // printf("%d ",num2);
    // num1=num1+num2;
    // printf("%d ",num1);
    // num2=num1+num2;
    // printf("%d ",num2);
    // num1=num1+num2;
    // printf("%d ",num1);
    // num2=num1+num2;
    // printf("%d ",num2);
}