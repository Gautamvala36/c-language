// Write a programe to create a menu driven triangle printer using this link get size of triangle from user
// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png

#include <stdio.h>
void get_Half_Pyramid(int size)
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
}
void get_Inverted_Half_Pyramid(int size)
{
    int count = 0, flash = 0;
    for (flash = size; flash >= 1; flash--)
    {
        for (count = 1; count <= flash; count++)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}
void get_Hollow_Half_Pyramid(int size)
{
    int count = 0, space = 0;
    printf("1");
    printf("\n");
    for (space = 2; space < size; space++)
    {
        printf("1 ");
        for (count = 2; count < space; count++)
        {
            printf("  ");
        }
        printf("%d", count);
        printf("\n");
    }
    for (count = 0; count < size; count++)
    {
        printf("%d ", count + 1);
    }
}
void get_Hollow_Full_Pyramid(int size)
{
    int count = 0, flash, tamp = 0, adder = 1, mypri = 2;
    if (size <= 9)
    {
        for (count < 1; count <= size; count++)
        {
            printf(" ");
        }
        printf("1");
        printf(" ");
        printf("\n");
        for (tamp = size; tamp > 0; tamp--)
        {
            for (count = 0; count < tamp; count++)
            {
                printf(" ");
            }
            printf("1");
            for (flash = 1; flash <= adder; flash++)
            {
                printf(" ");
            }
            printf("%d", mypri);
            printf("\n");
            adder = adder + 2;
            mypri++;
        }
        for (count = 1; count <= size + 2; count++)
        {
            printf("%d ", count);
        }
    }
    else
    {
        printf("\nNot Availabel");
    }
}
void main()
{

    int option = 0, size = 0;

    printf("\nEnetr 1 for Half Pyramid ");
    printf("\nEnter 2 for Inverted Half Pyramid");
    printf("\nEnter 3 for Hollow Half Pyramid");
    printf("\nEnter 4 for Hollow Full Pyramid");
    printf("\nEnter 5 for all pyramid : ");
    printf("\nSelect any one oprion : ");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("\nHalf Pyramid ");
        printf("\nEnter your size : ");
        scanf("%d", &size);
        get_Half_Pyramid(size);
    }

    else if (option == 2)
    {
        printf("\nInverted Half Pyramid");
        printf("\nEntre your size : ");
        scanf("%d", &size);
        get_Inverted_Half_Pyramid(size);
    }

    else if (option == 3)
    {
        printf("\nHollow Half Pyramid");
        printf("\nEnter your size : ");
        scanf("%d", &size);
        get_Hollow_Half_Pyramid(size);
    }

    else if (option == 4)
    {
        printf("\nHollow Full Pyramid");
        printf("\nEnter your size : ");
        scanf("%d", &size);
        get_Hollow_Full_Pyramid(size);
    }

    else if (option == 5)
    {
        /* code */
    }
    
}