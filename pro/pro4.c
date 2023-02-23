// write a program to print number pattern
/*    1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1 
*/

#include <stdio.h>

void main()
{
    int space = 0, count = 0, flash = 0, size = 0;

    printf("Enter your number : ");
    scanf("%d",&size);

    for (flash = 1; flash <= size; flash++)
    {
        for (space = 1; space <= size - flash; space++)
        {
            printf("  ");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        for (count = flash - 1; count >= 1; count--)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
    // for (space = 0; space < 3; space++)
    // {
    //     printf("-");
    // }
    // for (count = 1; count <= 2; count++)
    // {
    //     printf("%d", count);
    // }
    // printf("1");
    // printf("\n");
    // for (space = 0; space < 1; space++)
    // {
    //     printf("-");
    // }
    // for (count = 1; count <= 4; count++)
    // {
    //     printf("%d", count);
    // }
    // for (count = 3; count >= 1; count--)
    // {
    //     printf("%d", count);
    // }
    // printf("\n");
    // for (count = 1; count <= 5; count++)
    // {
    //     printf("%d", count);
    // }
    // for (count = 4; count >= 1; count--)
    // {
    //     printf("%d", count);
    // }
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("1");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("1");
    // printf("2");
    // printf("1");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("2");
    // printf("1");
    // printf("\n");
    // printf("-");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("3");
    // printf("2");
    // printf("1");
    // printf("\n");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("5");
    // printf("4");
    // printf("3");
    // printf("2");
    // printf("1");
}