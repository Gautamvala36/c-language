//Area of Right Angle Triangle = 1/2 * b * h

#include <stdio.h>

void main()
{
    int b, h, tamp;

    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of h : ");
    scanf("%d", &h);

    tamp = (1 / 2.0) * b * h;
    printf("Enter the value of Area of Right Angle Triangle : %d", tamp);
}