// write a program to print following right triangle star pattern:
// * * * * *
// *      *
// *     *
// *    *
// *   *
// *  *
// * *
// **
// *
#include <stdio.h>

void main()
{
    int i = 0, j = 0;

    for (i = 0; i < 4; i++)
    {
        printf("* ");
    }
    for (i = 5; i > 0; i--)
    {
        printf("\n");
        printf("*");
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (i = 1; i == 1; i++)
    {
        // printf(" ");
        // printf("\n");
        printf("*");
    }
    printf("\nGood By..");
    // printf("*");
    // for ( j = 0; j < 4; j++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // printf("*");
    // for ( j = 0; j < 3; j++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // printf("*");
    // printf("\n");
}