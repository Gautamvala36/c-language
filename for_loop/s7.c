// write a program to print pattern
//     *
//    * *
//   *   *
//  *     *
// *********
#include <stdio.h>

void main()
{
    int i, j, n = 6;

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i == n || j == 1 || j == (2 * i - 1))
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