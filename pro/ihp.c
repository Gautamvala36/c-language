// Inverted Half Pyramid
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <stdio.h>

void main()
{
    int size = 0, count = 0, flash = 0;
    // int n = 5;

    printf("Entre your size : ");
    scanf("%d",&size);
    for (flash = size; flash >= 1; flash--)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}