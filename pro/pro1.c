// C program to print number pattern
// 1
// 1 2 3
// 1 2 3 4 5

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0;

    printf("enter your number : ");
    scanf("%d",&size);

    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= 2 * flash - 1; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
    // printf("1");
    // printf("\n");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("\n");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("\n");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("5");
    // printf("\n");
}