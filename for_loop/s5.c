// write a program to print following pattern
//      *
//     ***
//    *****
//   *******
//  *********

#include <stdio.h>

void main()
{
    int i, j, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Good by..");
}
