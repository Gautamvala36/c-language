#include <stdio.h>

void main()
{
    int num, frist, second;

    printf("Enter the number :");
    scanf("%1d%1d", &frist, &second);

    if (frist == 1)
    {
        if (second  % 10)
        {
            if (second == 0)
            {
                printf("ten");
            }
            if (second == 1)
            {
                printf("eleven");
            }
            if (second == 2)
            {
                printf("twelve");
            }
            if (second == 3)
            {
                printf("thirteen");
            }
            if (second == 4)
            {
                printf("fourteen");
            }
            if (second == 5)
            {
                printf("fifteen");
            }
            if (second == 6)
            {
                printf("sixteen");
            }
            if (second == 7)
            {
                printf("seventeen");
            }
            if (second == 8)
            {
                printf("eighteen");
            }
            if (second == 9)
            {
                printf("ninteen");
            }
        }
    }
    if (frist % 10)
    {
        if (frist == 1)
        {
            printf("one");
        }
        if (frist == 2)
        {
            printf("twenty");
        }
        if (frist == 3)
        {
            printf("thirty");
        }
        if (frist == 4)
        {
            printf("forty");
        }
        if (frist == 5)
        {
            printf("fifty");
        }
        if (frist == 6)
        {
            printf("sixty");
        }
        if (frist == 7)
        {
            printf("seventy");
        }
        if (frist == 8)
        {
            printf("eighty");
        }
        if (frist == 9)
        {
            printf("ninety");
        }
    }
    if (second  % 10)
    {
        if (second == 1)
        {
            printf("-one");
        }
        if (second == 2)
        {
            printf("-two");
        }
        if (second == 3)
        {
            printf("-three");
        }
        if (second == 4)
        {
            printf("-four");
        }
        if (second == 5)
        {
            printf("-five");
        }
        if (second == 6)
        {
            printf("-six");
        }
        if (second == 7)
        {
            printf("-seven");
        }
        if (second == 8)
        {
            printf("-eight");
        }
        if (second == 9)
        {
            printf("-nine");
        }
        else
        {
            second == 0;
        }
    }
    
    printf("\nGood");
}