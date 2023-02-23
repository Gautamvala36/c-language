// write a program to print following pattern
// 1 8 27 64...1000

#include <stdio.h>
int main()
{
    int number = 1;
    while (number < 10)
    {
        printf("%d ", number * number * number);
        number++;
    }
    printf("\nGood By..");
}