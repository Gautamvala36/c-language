// write a program to take number as an input from user and print ot in reverse

#include <stdio.h>

void main()
{
    int size = 0;
    {
        printf("Enter The Size Number : ");
        scanf("%d", &size);
    }
    int number[size], count = 0, copy_variable;

    printf("Enter The Number : ");
    while (count < size)
    {
        scanf("%d", &number[count]);
        count++;
    }

    {
        // printf("Enter The Number : ");
        // scanf("%d", &number[1]);
        // printf("Entre The Number : ");
        // scanf("%d", &number[2]);
        // printf("Entre The Number : ");
        // scanf("%d", &number[3]);
        // printf("Enter The Number : ");
        // scanf("%d", &number[4]);
    }

    copy_variable = count - 1;

    printf("Number Is Reverse : ");
    for (count = copy_variable; count >= 0; count--)
    {
        printf("%d ", number[count]);
    }
}