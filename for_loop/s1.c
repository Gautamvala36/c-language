// write a program to print star pattern
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>

void main()
{
    int i, j, n;

    printf("Enter the Star number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}