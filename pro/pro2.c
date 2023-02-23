//  C program to print number pattern
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include <stdio.h>

void main()
{
    int flash , space , size ;

    printf("Enter your number : ");
    scanf("%d", &size);
   
    for (flash = 1; flash < size; flash++)
    {
        for (space = 1; space <= ((size - flash) * 2); space++)
        {
            printf(" ");
        }
        for (space = 1; space <= (flash * 2 - 1); space++)
        {
            printf("%d ", space);
        }   
        printf("\n");
    }
    // for (space = 0; space < 2; space++)
    // {
    //     printf("-");
    // }
    // for (count = 1; count <= 5; count++)
    // {
    //     printf("%d",count);
    // }
    // printf("\n");
    // for (space = 0; space < 1; space++)
    // {
    //     printf("-");
    // }
    // for (count = 1; count <= 7; count++)
    // {
    //     printf("%d",count);
    // }
    // printf("\n");
    // for (count = 1; count <= 9; count++)
    // {
    //     printf("%d",count);
    // }
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("1");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("\n");
    // printf("-");
    // printf("-");
    // printf("-");
    // printf("1");
    // printf("2");
    // printf("3");
    // printf("4");
    // printf("5");
    // printf("\n");
}