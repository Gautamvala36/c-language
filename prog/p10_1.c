// C program to print the given number pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// ----------------------------------------------------
// 1--------1
// 21------12
// 321----123
// 4321--1234
// 5432112345

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0;

    printf("Enter yourr size : ");
    scanf("%d", &size);

    for (flash = 0; flash <= size; flash++)
    {
        for (count = flash; count >= 1; count--)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
    printf("\n");
    for (flash = 1; flash <= size; flash++)
    {
        for (count = flash; count >= 1; count--)
        {
            printf("%d", count);
        }
        for (count = flash * 2 ; count < size * 2 ; count++)
        {
            printf("-");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d", count);
        }
        printf("\n");
    }
}