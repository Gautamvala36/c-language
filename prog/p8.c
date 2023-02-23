// C program to print the given number pattern
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <stdio.h>

void main()
{
    int count = 0, space = 0, size = 0;

    printf("Enter your size : ");
    scanf("%d", &size);

    for (count = 1; count <= size; count++)
    {
        for (space = 1; space <= count; space++)
        {
            printf("%d", space);
        }

        for (space = count * 2; space < size * 2; space++)
        {
            printf("-");
        }
        for (space = count; space >= 1; space--)
        {
            printf("%d", space);
        }
        printf("\n");
    }
}