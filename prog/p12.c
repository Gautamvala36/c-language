// C program to print the given number pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// --------------------------------
//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include <stdio.h>
void get_p1(int size)
{
    int count = 0, flash = 0, num = 1;

    for (flash = 1; flash <= size; flash++)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}
void get_p2(int size)
{
    int count = 0, flash = 0, num = 1;
    if (size < 5)
    {
        for (flash = 1; flash <= size; flash++)
        {
            for (count = (flash * 2) + 2; count < (size * 2) + 2; count++)
            {
                printf(" ");
            }
            for (count = 1; count <= flash; count++)
            {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nNumber is not perfect");
    }
}
void main()
{
    int size = 0, option = 0;

    printf("Enter your size : ");
    scanf("%d", &size);
    printf("\noption : 1");
    printf("\noption : 2");
    printf("\noption : 3");
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
        get_p1(size);
        printf("-------------------------------------------\n");
        get_p2(size);
    }
}