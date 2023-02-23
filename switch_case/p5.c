// write a program check to odd and even using number

#include <stdio.h>

void main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("even number");
        break;

    case 1:
        printf("odd number");
        break;

    default:
        printf("Invalid Choices");
        break;
    }
    printf("\nGood By..");
}
