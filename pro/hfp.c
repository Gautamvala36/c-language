// Hollow Full Pyramid
//     1
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5
#include <stdio.h>

void main()
{
    int count = 0, flash, tamp = 0, adder = 1, mypri = 2, size = 0;

    printf("Enter your size : ");
    scanf("%d", &size);
    if (size <= 9)
    {
        for (count = 1; count <= size + 1; count++)
        {
            printf(" ");
        }
        printf("1");
        printf("\n");
        for (tamp = size; tamp > 0; tamp--)
        {
            for (count = 0; count < tamp; count++)
            {
                printf(" ");
            }
            printf("1");
            for (flash = 1; flash <= adder; flash++)
            {
                printf(" ");
            }
            printf("%d", mypri);
            printf("\n");
            adder = adder + 2;
            mypri++;
        }
        for (count = 1; count <= size + 2; count++)
        {
            printf("%d ", count);
        }
    }
    else
    {
        printf("Not Availabel");
    }
    printf("\nGood By..");

    // for (space = 0; space < 6; space++)
    // { 
    //     printf(" ");
    // }
    // printf("1");
    // printf("\n");
    // for (space = 0; space < 4; space++)
    // {
    //     printf(" ");
    // }
    // printf("1");
    // for (space = 0; space < 3; space++)
    // {
    //     printf(" ");
    // }
    // printf("2");
    // printf("\n");
    // for (space = 0; space < 3; space++)
    // {
    //     printf(" ");
    // }
    // printf("1");
    // for (space = 0; space < 5; space++)
    // {
    //     printf(" ");
    // }
    // printf("3");
    // printf("\n");
    // for (space = 0; space < 2; space++)
    // {
    //     printf(" ");
    // }
    // printf("1");
    // for (space = 0; space < 7; space++)
    // {
    //     printf(" ");
    // }
    // printf("4");
    // printf("\n");
    // for (count = 1; count <= 5; count++)
    // {
    //     printf("%d  ",count);
    // }

    // printf(" ");
    // printf(" ");
    // printf(" ");
    // printf("1\n");
    // printf(" ");
    // printf("1");
    // printf(" ");
    // printf(" ");
    // printf(" ");
    // printf("2\n");
    // printf("1");
    // printf(" ");
    // printf(" ");
    // printf(" ");
    // printf(" ");
    // printf(" ");
    // printf(" ");
    // printf("3\n");
    // printf("1 ");
    // printf("2 ");
    // printf("3 ");
    // printf("4");
}
