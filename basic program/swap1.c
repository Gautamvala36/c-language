#include <stdio.h>

void main()
{
    int a = 50, b = 30;

    a = a - b; //50-30=20
    b = a + b; //20+30=50
    a = b - a; //50-20=30

    printf("Enter the Value of a : %d", a);
    printf("\nEnter the value of b : %d", b);
}