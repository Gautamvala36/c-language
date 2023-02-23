// full diamond
//    *
//   * *
//  *   *
//  *   *
//   * *
//    *

#include <stdio.h>

void main()
{
    int count = 0, space = 0, i_space = 0, star = 0, size = 0;

    printf("Enter your full diamond star : ");
    scanf("%d", &size);

    for (space = 0; space < size + 1; space++)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");
    for (star = size; star > 0; star--)
    {
        for (space = 0; space < star; space++)
        {
            printf(" ");
        }
        printf("*");
        // printf("\n");
        for (i_space = 0; i_space <= count; i_space++)
        {
            printf(" ");
        }
        count = count + 2;
        printf("*");
        printf("\n");
    }
    for (star = 0; star < size; star++)
    {
        for (space = 0; space <= star; space++)
        {
            printf(" ");
        }
        printf("*");
        // printf("\n");
        for (i_space = count - 1; i_space > 0; i_space--)
        {
            printf(" ");
        }
        count = count - 2;
        printf("*");
        printf("\n");
    }
    for (space = 0; space < size + 1; space++)
    {
        printf(" ");
    }
    printf("*");
}