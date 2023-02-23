// half pyramid
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
#include<stdio.h>

void main()
{
    int size = 0, count = 0, flash = 0;

    printf("Enter your size : ");
    scanf("%d", &size);
    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}