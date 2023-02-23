// example of with arguments without return value function
// write a program to find area of circle

#include <stdio.h>

float get_pi()
{
    float pi = 3.141592;
    return pi;
}
void main()
{
    int redius;
    float pi, ans;

    printf("Enter value of redius : ");
    scanf("%d", &redius);
    pi = get_pi();
    ans = pi * (redius * redius);
    printf("The area of circle is : %.5f", ans);
}