#include <stdio.h>
void get_inverted_full_pyramid(int n)
{
    int count = 0, space = 0, size=n;
    
    for (count = 1; count <= size; count++)
    {
        for (space = count; space < size; space++)
        {
            printf(" ");
        }
        for (space = 1; space <= (2 * count - 1); space++)
        {
            if (count == size || space == 1 || space == (2 * count - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void main()
{
    
    int n=0;
    printf("Enter your size : ");
    scanf("%d",&n);
    get_inverted_full_pyramid(n);
    // for (space = 0; space < 6; space++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // for (space = 0; space < 4; space++)
    // {
    //     printf(" ");
    // }
    // for (count = 0; count < 2; count++)
    // {
    //     printf("*   ");
    // }
    // printf("\n");
    // for (space = 0; space < 3; space++)
    // {
    //     printf(" ");
    // }
    // for (count = 0; count < 2; count++)
    // {
    //     printf("*     ");
    // }
    // printf("\n");
    // for (space = 0; space < 2; space++)
    // {
    //     printf(" ");
    // }
    // for (count = 0; count < 2; count++)
    // {
    //     printf("*       ");
    // }
    // printf("\n");
    // for (space = 0; space < 1; space++)
    // {
    //     printf(" ");
    // }
    // for (count = 0; count < 6; count++)
    // {
    //     printf("* ");
    // }

    // printf("    ");
    // printf(" *");
    // printf("\n");
    // printf("   ");
    // printf(" ");
    // printf("*");
    // printf(" ");
    // printf("*");
    // printf("\n");
    // printf("   ");
    // printf("*");
    // printf("   ");
    // printf("*");
}