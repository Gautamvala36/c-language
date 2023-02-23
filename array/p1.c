//  C program to read and print elements in an array

#include <stdio.h>

void main()
{
    int number;
    {
        printf("Enter the value of Number : ");
        scanf("%d", &number);
    }

    int num[number], count = 0, i = 0, sum = 0, max, min, even = 0, odd = 0, tamp, found = 0, tosearch;

    printf("Enter %d Element in the array : ", number);
    for (count = 0; count < number; count++)
    {
        scanf("%d", &num[count]);
    }

    printf("Enter the element : ");
    for (count = 0; count < number; count++)
    {
        printf("%d, ", num[count]);
    }

    // search the number of position
    printf("\n1.Enter the search number : ");
    scanf("%d", &tosearch);

    for (count = 0; count < number; count++)
    {
        if (num[count] == tosearch)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("\t%d is found at position : %d", tosearch, count + 1);
    }
    else
    {
        printf("\t%d is not found in the number", tosearch);
    }

    // totel num[count] add.
    count = 0;
    while (count < number)
    {
        sum = sum + num[count];
        count++;
    }
    printf("\n2.This is sum : %d", sum);

    // negative number
    printf("\n3.Enter the Negative number : ");
    for (count = 0; count < number; count++)
    {
        if (num[count] < 0)
        {
            printf("%d ", num[count]);
        }
    }

    // positive number
    printf("\n4.Enter the Positive number : ");
    for (count = 0; count < number; count++)
    {
        if (num[count] > 0)
        {
            printf("%d ", num[count]);
        }
    }

    // minmam and maxmam number
    max = num[0];
    min = num[0];
    for (count = 0; count < number; count++)
    {
        if (num[count] > max)
        {
            max = num[count];
        }
        if (num[count] < min)
        {
            min = num[count];
        }
    }
    printf("\n5.This is min value of : %d", min);
    printf("\n6.This is max value of : %d", max);

    //even and odd number
    for (count = 0; count < number; count++)
    {
        if (num[count] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n7.This is even number : %d", even);
    printf("\n8.Thie is odd number : %d", odd);

    // descending order
    for (count = 0; count < number; count++)
    {
        for (i = count; i < number; i++)
        {
            if (num[count] < num[i])
            {
                tamp = num[count];
                num[count] = num[i];
                num[i] = tamp;
            }
        }
    }
    printf("\n9.This is descending order array : ");
    for (count = 0; count < number; count++)
    {
        printf("%d ", num[count]);
    }

    // ascending order
    for (count = 0; count < number; count++)
    {
        for (i = count; i < number; i++)
        {
            if (num[count] > num[i])
            {
                tamp = num[i];
                num[i] = num[count];
                num[count] = tamp;
            }
        }
    }
    printf("\n10.This is acscending order array : ");
    for (count = 0; count < number; count++)
    {
        printf("%d ", num[count]);
    }
}