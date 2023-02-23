//  C program to print number pattern
// 1
// 121
// 12321
// 1234321

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0;

    printf("Enter your number size : ");
    scanf("%d",&size);

    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d", count);
        }
        for (count = flash - 1; count >= 1; count--)
        {
            printf("%d", count);
        }
        printf("\n");
    }
    //     printf("1");
    //     printf("2");
    //     printf("1");
    //     printf("\n");
    //     printf("1");
    //     printf("2");
    //     printf("3");
    //     printf("2");
    //     printf("1");
    //     printf("\n");
    //     printf("1");
    //     printf("2");
    //     printf("3");
    //     printf("4");
    //     printf("3");
    //     printf("2");
    //     printf("1");
}