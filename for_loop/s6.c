// write a program to print following pattens
// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>

void main()
{
    int i, j, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("Good By..");
}