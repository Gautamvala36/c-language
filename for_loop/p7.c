// write a program to find factorial of user given number

#include <stdio.h>

void main()
{
    int num, count;
    long long int ans;

    printf("Enter the value of number : ");
    scanf("%d",&num);

    ans = num * (num - 1);
    count = num - 2;
    do
    {
        ans = ans * count;
        count--;
    } while (count > 0);
    printf("The value of ans : %lld", ans);
}