// write a program to print all odd number till 5000

#include <stdio.h>

void main()
{
    int number = 1;
    while (number < 5000)
    {
        printf(" %d", number);
        number = number + 2;
    }
    printf("\nGood By...");
}