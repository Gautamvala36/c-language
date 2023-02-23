// C program to print the given number pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>

void main()
{
    int count = 0, flash = 0, size = 0,num = 1;

    printf("Enter your number : ");
    scanf("%d",&size);

    for(flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}