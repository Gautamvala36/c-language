// find the div of 2 num

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    float num1;
    char ltr;

    printf("Enter the int value :");
    scanf("%d", &num);
    printf("enter the float value :");
    scanf("%f", &num1);
    printf("Enter the char value :");
    fflush(stdin);
    scanf("%c", &ltr);

    printf("\nEnetr the value int %d", num);
    printf("\nEnetr the value float %.3f", num1);
    printf("\nEnetr the value char  %c", ltr);
}