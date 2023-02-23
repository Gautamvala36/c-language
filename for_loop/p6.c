// write a program to find factorial of user given number

#include <stdio.h>

void main()
{
    int i, num; 
    long long int n = 1;

    printf("Enter the value of num : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        n = n * i;
    }
    printf("This is ans :%lld", n);
    printf("\nGood By..");
}