//  C program to print number pattern
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7

#include <stdio.h>

void main()
{
    int space = 0, count = 0, size = 0;

    printf("Enter your size : ");
    scanf("%d",&size);

    for (count < 1; count < size; count++)
    {
        for (space = 1; space <= (size - count) * 2; space++)
        {
            printf(" ");
        }
        for (space = 1; space <= (count * 2 - 1); space++)
        {
            printf("%d ", space);
        }
        printf("\n");
    }
}