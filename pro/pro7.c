// C program to print the given number pattern
// 1
// 1 2
// 1 2 3
// 1 2
// 1
/* -------------------------------------------- */
//    1
//   1 2
//  1 2 3
//   1 2
//    1

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, space = 0, size = 0;

    printf("Enter your number : ");
    scanf("%d", &size);

    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
    for (flash = size - 1; flash >= 1; flash--)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
printf("---------------------------------------------------------------\n");
    for (flash = 1; flash <= size; flash++)
    {
        for (space = size - 1; space >= flash; space--)
        {
            printf(" ");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }

    for (flash = size - 1; flash >= 1; flash--)
    {
        for (space = flash; space < size; space++)
        {
            printf(" ");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}