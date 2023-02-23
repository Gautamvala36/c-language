// write a program to find volume of cone
// Volume of Cone = 1/3(pi * r * r * h)

#include <stdio.h>

void main()
{
    float pi = 3.14, r, h, tamp;

    printf("Enter the r :");
    scanf("%f", &r);
    printf("Enter the h :");
    scanf("%f", &h);

    tamp = (3.14 * r * r * h) / 3;

    printf("Enter the Volume of Cone :%f", tamp);
}