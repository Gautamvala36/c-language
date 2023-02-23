// C program to print number pattern
// 1
// 1 2 3
// 1 2 3 4 5

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0;

    printf("Enter your size : ");
    scanf("%d", &size);

    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= 2 * flash - 1; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}