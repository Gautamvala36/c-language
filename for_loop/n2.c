// write a program to print pattern
// 12345
// 2345
// 345
// 45
// 5
// 5
// 45
// 345
// 2345
// 12345

#include<stdio.h>

void main()
{
    int i, j, n;

    printf("Enter the value of number : ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    for (i = n; i >= 1; i--)
    {
        for (j = i ; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}