// write a program to print following pattern
// 1 8 27 64 .... 10000

#include <stdio.h>

void main()
{
    int num = 1, temp = 0, size = 0;

    printf("Enter your number : ");
    scanf("%d", &size);

    for (num = 1; num < size; num++)
    {
        temp = num * num * num;
        printf("%d ", temp);
    }
}