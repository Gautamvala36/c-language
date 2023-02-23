//  write a program to print following  pattern
// 0,1,3,6,10,15,21,28,36,45,55,...,1000
// 0 1 2 3 4 5

#include <stdio.h>

void main()
{
    int num = 0, temp = 1;

    for (temp = 0; num < 990; temp++)
    {
        num = num + temp;
        printf("%d ", num);
    }
}