// C program to print the given number pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include <stdio.h>

void main()
{
    int count = 0, space = 0, flash = 0, size = 0;

    for (flash = 0; flash <= 5; flash++)
    {
        for (count = flash; count >= 1; count--)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}
