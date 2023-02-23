// C program to print the given number pattern
// 4 4 4 4
// 3 3 3
// 2 2
// 1

#include <stdio.h>

void get_for(int size) // for loop
{
    int count = 0, flash = 0;

    for (flash = size; flash >= 1; flash--)
    {
        for (count = flash; count >= 1; count--)
        {
            printf("%d ", flash);
        }
        printf("\n");
    }
}
void get_do(int size)
{
    int count = 0, flash = 0;

    flash = size;
    do
    {
        count = flash;
        do
        {
            printf("%d ", count);
            count--;
        } while (count >= 1);
        flash--;
        printf("\n");
    } while (flash >= 1);
}
void get_while(int size)
{
    int count = 0, flash = 0;

    flash = size;
    while (flash >= 1)
    {
        count = flash;
        while (count >= 1)
        {
            printf("%d ", count);
            count--;
        }
        flash--;
        printf("\n");
    }
}
void main()
{
    int size = 0, option = 0;

    printf("Enter you size : ");
    scanf("%d", &size);

    get_for(size);
    get_do(size);
    get_while(size);
}