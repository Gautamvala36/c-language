// write a program to find power and exponent

#include <stdio.h>

void main()
{
    int base, power, exponent, count;

    printf("Enter the value of Base : ");
    scanf("%d", &base);
    printf("Enter the value of Power : ");
    scanf("%d", &power);

    if (power > 1)
    {
        exponent = base * base;//25
        count = 2;
        while (count < power)
        {
            exponent = exponent * base; //50
            count++;
        }
        printf("exponent : %d", exponent);
    }
    else if (power == 1)
        printf("%d", base);
    else
    {
        printf("Invalid Choices");
    }
    printf("\nGood By..");
}