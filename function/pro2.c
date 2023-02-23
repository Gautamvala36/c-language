// example of function without retrun value and with agrument

#include <stdio.h>
#include<stdlib.h>
void printline(char sign, int size)
{
    for(int count=0;count<size;count++)
    {
        printf("%c", sign);
    }
}
void main()
{
    char sign;
    int size;
    printf("Enter the size of line : ");
    scanf("%d", &size);
    fflush(stdin);
    printf("Enter your name : ");
    scanf("%c", &sign);
    printline(sign, size);
}