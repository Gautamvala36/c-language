// write a program to print following number
// 1 8 27 64 .... 10000

#include <stdio.h>

void main()
{
    int num = 1, ans = 0;

    printf("%d", num);

    while (ans < 9261)
    {

        num = num + 1;
        ans = num * num * num;
        printf(" %d", ans);
    }
    printf("\nGood By..");
}