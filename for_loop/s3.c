// write a program to print following patten
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

void main()
{
    int i, j, n = 7;

    for (i = 0; i < n; i++)
    {

        for (j = 1; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}