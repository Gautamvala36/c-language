// write a program to print number patten
// 1
// 12
// 1 3
// 1  4
// 1   5
// 1    6
// 1234567
#include <stdio.h>

void main()
{
    int count = 0, space = 0;

    printf("1");
    printf("\n");
    for (space = 2; space < 7; space++)
    {
        printf("1");
        for (count = 2; count < space; count++)
        {
            printf(" ");
        }
        printf("%d", count);
        printf("\n");
    }
    for (count = 0; count < 7; count++)
    {
        printf("%d", count + 1);
    }
}