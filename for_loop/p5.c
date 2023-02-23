// write a program to print odd and even number

#include <stdio.h>

void main() 
{
    int i, n, j;

    printf("Entre the number : ");
    scanf("%d", &n);
    printf("This is odd number :\n");
    for (i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    printf("\nThis is even number :\n");
    for (j = 2; j <= n; j += 2)
    {
        printf("%d\n", j);
    }
    printf("Good by..");
}