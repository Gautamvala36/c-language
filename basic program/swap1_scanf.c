#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("Enter the Value of a : %d", a);
    printf("\nEnter the value of b : %d", b);
}