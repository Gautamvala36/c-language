// C program to print the given number pattern
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0;

    for (flash = 1; flash <= 5; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d", count);
        }
        for (count = flash*2; count < 5*2; count++)
        {
            printf(" ");
        }
        for (count = flash; count >= 1; count--)
        {
            printf("%d", count);
        }
        printf("\n");
    }
}