// write a proram to sort in array in ascending order

#include <stdio.h>

void main()
{
    int size = 0;
    
    printf("Enter The size of number : ");
    scanf("%d", &size);

    int number[size], count = 0, tamp = 0, flash = 0;

    for (count = 0; count < size; count++)
    {
        printf("Enter value of number %d : ", count + 1);
        scanf("%d", &number[count]);
    }

    {
        // printf("Enter value of number 2 : ");
        // scanf("%d", &number[1]);
        // printf("Enter value of number 3 : ");
        // scanf("%d", &number[2]);
        // printf("Enter value of number 4 : ");
        // scanf("%d", &number[3]);
        // printf("Enter value of number 5 : ");
        // scanf("%d", &number[4]);
    }

    printf("\nThis is wihout sorting array.");
    for (count = 0; count < size; count++)
    {
        printf("\nThe value of number %d is %d ", count + 1, number[count]);
    }

    {
        // printf("\nThe value of number 2 is %d ",number[1]);
        // printf("\nThe value of number 3 is %d ",number[2]);
        // printf("\nThe value of number 4 is %d ",number[3]);
        // printf("\nThe value of number 5 is %d ",number[4]);
    }

    for (flash = 0; flash < size; flash++)
    {
        for (count = flash; count < size; count++)
        {
            if (number[flash] > number[count])
            {
                tamp = number[flash];
                number[flash] = number[count];
                number[count] = tamp;
            }
        }
    }

    printf("\n\nThis is with sorting array.");
    for (count = 0; count < size; count++)
    {
        printf("\nThe value of number %d is %d", count + 1, number[count]);
    }
}