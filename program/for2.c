//  write a program to print following pattern
// 1,5,12,22,35,51,70,92,117,145,176,...,3000
// 3 3 3 3

#include <stdio.h>

void main()
{
    int num = 1, temp = 4, n;

    printf("Enter your number : ");
    scanf("%d", &n);

    printf("%d ", num);
    for (num = 1; num < n; temp = temp + 3)
    {
        num = num + temp;
        printf("%d ", num);
    }

    //    num = num + temp;     1 + 4 = 5
    //    printf("%d",num);
    //    temp = temp + 3;      4 + 3 = 7
    //    num = num + temp;     5 + 7 = 12
    //    printf(" %d",num);
    //    temp = temp + 3;      7 + 3 = 10
    //    num = num + temp;     12 + 10 = 22
    //    printf(" %d",num);
}