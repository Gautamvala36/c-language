// C program to print diamond star pattern
//     *
//    ***
//   *****
//    ***
//     *

#include <stdio.h>

void main()
{
    int count = 0, space = 0, flash = 0, size = 0;

    printf("Enter your size : ");
    scanf("%d",&size);

    for (flash = 0; flash <= size; flash++)
    {
        for (space = 1; space <= size - flash; space++)
        {
            printf(" ");
        }
        for (count = 1; count <= 2 * flash - 1 ; count++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (flash = size - 1; flash >= 1; flash--)
    {
        for (space = 1; space <= size - flash; space++)
        {
            printf(" ");
        }
        for (count = 1; count <= 2 * flash - 1 ; count++)
        {
            printf("*");
        }
        printf("\n");
    }

    //
    // for (space = 0; space < 2; space++)
    // {
    //     printf("-");
    // }
    // for (count = 0; count < 5; count++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    // for (space = 0; space < 1; space++)
    // {
    //     printf("-");
    // }
    // for (count = 0; count < 7; count++)
    // {
    //     printf("*");
    // }
    // printf("\n");
    // for (count = 0; count < 9; count++)
    // {
    //     printf("*");
    // }
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("*");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("-");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("-");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("*");
    // printf("*");
    // printf("*");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("*");
}