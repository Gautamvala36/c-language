// C program to print the given number pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// ----------------------------------------------------
// 1--------1
// 21------12
// 321----123
// 4321--1234
// 5432112345

#include <stdio.h>
void get_p1(int size)
{
    int count = 0, flash = 0;

    for (flash = 0; flash <= size; flash++)
    {
        for (count = flash; count >= 1; count--)
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
        for (count = flash; count >= 1; count--)
        {
            printf("%d", count);
        }
        for (count = flash * 2; count < size * 2; count++)
        {
            printf("-");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("%d", count);
        }
        printf("\n");
    }
}
void main()
{
    int size = 0, option = 0;

    printf("Enter yourr size : ");
    scanf("%d", &size);

    printf("oprion : 1\n");
    printf("1\n2 1\n3 2 1");
    printf("\noprion : 2\n");
    printf("1----1\n21--12\n321123");
    printf("\noprion : 3 ");
    printf(">>> option 1 and 2 both");
    printf("\nSelect any one option : ");
    scanf("%d", &option);

    if (option == 1)
    {
        get_p1(size);
    }
    if (option == 2)
    {
        get_p2(size);
    }
    if (option == 3)
    {
        printf("oprion : 1");
        get_p1(size);
        printf("\n");
        printf("oprion : 2\n");
        get_p2(size);
    }
}