// write a program to print inverted half pyramid
// *

#include <stdio.h>

void main()
{
    int count = 0, flash = 5;

    while (count < 5)
    {
        printf("* ");
        count = count + 1;
    }
    printf("\n");
    count = 0;
    while (count < 4)
    {
        printf("* ");
        count = count + 1;
    }
    printf("\n");
    count = 0;
    while (count < 3)
    {
        printf("* ");
        count = count + 1;
    }
    printf("\n");
    count = 0;
    while (count < 2)
    {
        printf("* ");
        count = count + 1;
    }
    printf("\n");
    count = 0;
    while (count < 1)
    {
        printf("* ");
        count = count + 1;
    }
    printf("\nGood By..");
}
