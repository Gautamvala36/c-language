// write a program to print number pattern
// 7654321
//  6    1
//   5   1
//    4  1
//     3 1
//      21
//       1

#include <stdio.h>

void main()
{
    int count = 0, space = 0;

    for (count = 7; count > 0; count--)
    {
        printf("%d", count);
    }
    printf("\n");
    for (space = 7; space > 2; space--)
    {
        for (count = 7; count > space; count--)
        {
            printf(" ");
        }
        printf("%d", count - 1);
        for (count <= 7; count > 2; count--)
        {
            printf(" ");
        }
        printf("%d", count - 1);
        printf("\n");
    }
    printf("      1");
    printf("\nGood By..");
}