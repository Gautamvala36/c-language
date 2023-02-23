// write a program to print i\o in array

#include <stdio.h>

void main()
{
    int number[5], count = 0;

    for (count = 0; count < 5; count++)
    {
        printf("Enter the number %d : ", count + 1);
        scanf("%d", &number[count]);
    }

    { // printf("Enter the number 2 : ");
        // scanf("%d",&number[1]);
        // printf("Enter the number 3 : ");
        // scanf("%d",&number[2]);
        // printf("Enter the number 4 : ");
        // scanf("%d",&number[3]);
        // printf("Enter the number 5 : ");
        // scanf("%d",&number[4]);
    }

    count = 0;
    while (count < 5)
    {
        printf("\nThe value of number %d or %d ", count + 1, number[count]);
        count++;
    }
    
    { // printf("\nThe value of number 2 : %d",number[1]);
        // printf("\nThe value of number 3 : %d",number[2]);
        // printf("\nThe value of number 4 : %d",number[3]);
        // printf("\nThe value of number 5 : %d",number[4]);
    }
}