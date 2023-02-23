#include <stdio.h>

void main()
{
    int a = 10, b = 20, c = 30, tamp;

    tamp = b;
    b = a;
    a = c;
    c = tamp;

    printf("Entre the value of a : %d", a);
    printf("\nEntre the value of b : %d", b);
    printf("\nEntre the value of c : %d", c);
}