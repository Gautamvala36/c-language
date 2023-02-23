// Write a programe to findout how many days a month has accpect month from user

#include <stdio.h>

void main()
{
    int month;

    printf("Enter the month : ");
    scanf("%d", &month);

    if (month == 1)
    {
        printf("january : 31 days");
    }
    else if (month == 2)
    {
        printf("february : 28/29 days");
    }
    else if (month == 3)
    {
        printf("march : 31 days");
    }
    else if (month == 4)
    {
        printf("april : 30 days");
    }
    else if (month == 5)
    {
        printf("may : 31 days");
    }
    else if (month == 6)
    {
        printf("june : 30 days");
    }
    else if (month == 7)
    {
        printf("july : 31 days");
    }
    else if (month==8)
    {
        printf("august : 31 days");
    }
    else if(month==9)
    {
        printf("september : 30 days");
    }
    else if(month==10)
    {
        printf("october : 31 days");
    }
    else if(month==11)
    {
        printf("november : 30 days");
    }
    else if(month==12)
    {
        printf("december : 31 days");
    }
    else
    {
        printf("Invalid ");
    }
    
}