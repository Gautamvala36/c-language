// exm of modulus %
// write a program to split one 2 digit number in two
// number=56
// frist=5,second=6

#include <stdio.h>

void main()
{
    int number, frist, second;
    printf("Enter the frist num1 :");
    scanf("%d", &number);
    frist = number / 10;
    second = number % 10;
    printf("this is the frist ans %d \n this is the second ans %d", frist, second);
}