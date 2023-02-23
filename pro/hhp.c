// Hollow Half Pyramid
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
#include <stdio.h>

void main()
{
    int count = 0, space = 0, size = 0;
    printf("Enter your size : ");
    scanf("%d",&size);
    printf("1");
    printf("\n");
    for (space = 2; space < size; space++)
    {
        printf("1 ");
        for (count = 2; count < space; count++)
        {
            printf("  ");
        }
        printf("%d", count);
        printf("\n");
    }
    for (count = 0; count < size; count++)
    {
        printf("%d ", count + 1);
    }
}