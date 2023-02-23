//  write a program to print number patterns
// 1
// 123
// 12345
// 1234567
// 123456789
// 1234567
// 12345
// 123
// 1
#include <stdio.h>

void main()
{
    int i, j, n;

    printf("Enter the value of number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}