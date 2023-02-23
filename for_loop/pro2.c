// write a program to print following pattern
// 1,5,12,22,35,51,70,92,117,145,176,...,3000
// 3 3 3 3

#include <stdio.h>

void main()
{
    int num = 1, tamp = 4;
    printf(" %d", num);
    for (num = 1; num < 2882; tamp = tamp + 3)

    {
        num = num + tamp;
        printf(" %d", num);
    }
    // tamp = tamp + 3;     4+3=7
    // num = num + tamp;    5+7=12
    // printf("%d", num);
    // tamp = tamp + 3;     7+3=10
    // num = num + tamp;    12+10=22
    // printf("%d", num);
}