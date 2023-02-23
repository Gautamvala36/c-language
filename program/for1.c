//  write a program to print following  pattern
// 0,1,3,6,10,15,21,28,36,45,55,...,1000
// 0 1 2 3 4 5

#include <stdio.h>

void main()
{
    int num = 0, temp = 1;

    for (temp = 0; temp < 45; temp++)
    {
        num = num + temp;
        printf(" %d",num);
    }
    // printf("%d",num);
    // num=num+tamp;        0+1=1
    // printf("%d",num);
    // tamp=tamp+1;         1+1=2
    // num=num+tamp;        1+2=3
    // printf("%d",num);
    // tamp=tamp+1;         2+1=3
    // num=num+tamp;        3+3=6
    // printf("%d",num);
}