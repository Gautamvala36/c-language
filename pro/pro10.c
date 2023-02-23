// C program to print the given number pattern
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
#include <stdio.h>
void for_loop(int size)
{
    int count = 0, flash = 0;

    for (flash = size; flash >= 1; flash--)
    {
        for (count = flash; count <= size; count++)
        {
            printf("%d ", flash);
        }
        printf("\n");
    }
}
void do_loop(int size)
{
    int count = 0, flash = 0;
    flash = size;
    do
    {
        count = flash;  
        do
        {
            printf("%d ",flash);
            count++;
        } while (count <= size);
        printf("\n");
        flash--;
    }while (flash >= 1);
}
void while_loop(int size)
{
    int count = 0, flash = 0;
    flash = size;
    while (flash >= 1)
    {
        count = flash;
        while (count <= size)
        {
            printf("%d ",flash);
            count++;
        }
        flash--;
        printf("\n");
    }
}
void main()
{
    int count, flash = 0, size = 0, option = 0;

    printf("1 for loop");
    printf("\n2 do while loop");
    printf("\n3 while loop");
    printf("\nselect option :");
    scanf("%d",&option);
    printf("Enter your number : ");
    scanf("%d", &size);

    if(option == 1)
    {
        for_loop(size);
    }
    else if(option == 2)
    {
        do_loop(size);
    }
    else if(option == 3)
    {
        while_loop(size);
    }
    else
    {
        printf("\nInvalid option");
    }
    
}