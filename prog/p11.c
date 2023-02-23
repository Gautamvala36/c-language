// C program to print the given number pattern
// 1
// 1 2
// 1 2 3
// 1 2
// 1
/* -------------------------------------------- */
//    1
//   1 2
//  1 2 3
//   1 2
//    1

#include <stdio.h>

void get_p1(int size)
{
    int count = 0, flash = 0;

    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
    for (flash = size - 1; flash >= 1; flash--)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}
void get_p2(int size)
{
    int count = 0, flash = 0;

    for (flash = 1; flash <= size; flash++)
    {
        for (count = flash; count < size; count++)
        {
            printf(" ");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
    for (flash = size - 1; flash >= 1; flash--)
    {
        for (count = flash; count < size; count++)
        {
            printf(" ");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}
void main()
{
    int option = 0, size = 0;

    printf("Enter your size : ");
    scanf("%d", &size);

    printf("option : 1\n");
    printf("1\n1 2\n1 2 3\n1 2\n1");
    printf("\noption : 2\n");
    printf("     1\n   1 2\n  1 2 3\n   1 2\n    1");
    printf("\noption : 3\toption : 1 and 2 both");
    printf("\nSelect any one option : ");
    scanf("%d",&option);

    if(option == 1)
    {
        get_p1(size);
    }
    if(option == 2)
    {
        get_p2(size);
    }
    if(option == 3)
    {
        get_p1(size);
        printf("----------------------------------------------------------\n");
        get_p2(size);
    }
}