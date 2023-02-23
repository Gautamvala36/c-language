// write a program to print following pattern
// 2,1,3,4,7,11,18,29,47,76,123,...,3220

#include <stdio.h>

void main()
{
    int num1 = 2, num2 = 1, tamp = 0;

    printf("%d %d ", num1, num2);
    for (tamp = 0; num2 < 1364; tamp++)
    {
        num1 = num1 + num2;
        printf("%d ", num1);
        num2 = num1 + num2;
        printf("%d ", num2);
    }
    printf("\nGood By..");
    // num1 = num1 + num2; //2+1=3
    // printf("%d ", num1);
    // num2 = num1 + num2; //3+1=4
    // printf("%d ", num2);
    // num1 = num1 + num2; //3+4=7
    // printf("%d ", num1);
    // num2 = num1 + num2; //4+7=11
    // printf("%d ", num2);
}