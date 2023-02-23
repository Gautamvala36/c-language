// C program to print the given number pattern
// 5        5
// 54      45
// 543    345
// 5432  2345
// 5432112345

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0;

    // printf("Enter your size : ");
    // scanf("%d",&size);

    for (flash = 5; flash >= 1; flash--)
    {
        for (count = 5; count >= flash; count--)
        {
            printf("%d", count);
        }
        for (count = (flash * 2) + 2; count >= 5   ; count--)
        {
            printf("-");
        }
        for (count = flash; count <= 5; count++)
        {
            printf("%d", count);
        }
        printf("\n");
    }
}