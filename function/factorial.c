// write a program to print factorial number

#include <stdio.h>

void main()
{
    int size = 0, count = 0;
    long long int fact = 1;
    printf("Enter your number : ");
    scanf("%d", &size);
    if (size > 0)
    {
        if (size == 1)
        {
            printf("1");
        }
        else
        {
            fact = size * (size - 1); 
            for (count = 2; count < size; count++)
            {
                fact = fact * (size - count); 
            }
            printf("factorial number %d : %lld ", size, fact);
        }
    }
    else
    {
        printf("Invalid input");
    }
}