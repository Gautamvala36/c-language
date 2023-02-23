// write a program  to digit in words only 2 number
// number =56
// five six

#include <stdio.h>

void main()
{
    int num, frist, second;

    printf("Enter the number :");
    scanf("%d", &num);

    frist = num / 10;
    second = num % 10;

    if (frist == 1)
    {
        printf("one");
    }
    if (frist == 2)
    {
        printf("two");
    }
    if (frist == 3)
    {
        printf("three");
    }
    if (frist == 4)
    {
        printf("four");
    }
    if (frist == 5)
    {
        printf("five");
    }
    if (frist == 6)
    {
        printf("six");
    }
    if (frist == 7)
    {
        printf("seven");
    }
    if (frist == 8)
    {
        printf("eight");
    }
    if (frist == 9)
    {
        printf("nine");
    }
    if (frist == 0)
    {
        printf("zero");
    }
    if (second == 1)
    {
        printf("one");
    }
    if (second == 2)
    {
        printf("two");
    }
    if (second == 3)
    {
        printf("three");
    }
    if (second == 4)
    {
        printf("four");
    }
    if (second == 5)
    {
        printf("five");
    }
    if (second == 6)
    {
        printf("six");
    }
    if (second == 7)
    {
        printf("seven");
    }
    if (second == 8)
    {
        printf("eight");
    }
    if (second == 9)
    {
        printf("nine");
    }
    if (second == 0)
    {
        printf("zero");
    }
    else
    {
        printf(".");
    }

    printf("\nGood");
}