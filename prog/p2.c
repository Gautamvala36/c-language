//  write a program to print following pattern
// 1,5,12,22,35,51,70,92,117,145,176,...,3000
// 3 3 3 3

#include <stdio.h>

void main()
{
    int num = 1, temp = 4;

    printf("%d ", num);
    for (num = 1; num < 2882; temp = temp + 3)
    {
        num = num + temp;
        printf("%d ", num);
    }
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d ", num);
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d ", num);
    // temp = temp + 3;
    // num = num + temp;
    // printf("%d ", num);
}