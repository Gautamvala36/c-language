// write a programe to findout which number is greater out of given three number

#include <stdio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter value of number 1 : ");
    scanf("%d", &num1);
    printf("Enter value of number 2 : ");
    scanf("%d", &num2);
    printf("Enter value of number 3 : ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("num1 is greater");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("num2 is greater");
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("num3 is greater");
    }
    else
    {
        printf("Value is same");
    }

}