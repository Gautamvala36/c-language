// write a program to print following pattern
// 1 8 27 64 .... 10000

#include <stdio.h>

void main()
{
    int num = 1, temp = 0;

    for (temp = 1; temp < 1000; num++)
    {
        temp = num * num * num;
        printf("%d ", temp);
    }
}