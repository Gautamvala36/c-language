// Write a programe to create a menu driven triangle printer using this link get size of triangle from users
// https://i1.faceprep.in/fp/articles/img/46684_1580817324.png
// https://i1.faceprep.in/fp/articles/img/55984_1580817324.png

#include <stdio.h>
void get_half_pyramid(int n)
{
    int count = 0, space = 0, size = n;
    for (count = 0; count < size; count++)
    {
        for (space = 0; space < count; space++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void get_inverted_half(int n)
{
    int count = 0, space = 0, size = n;
    for (count = size; count > 0; count--)
    {
        for (space = count; space > 0; space--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void get_hollow_inverted_half(int n)
{
    int count = 0, space = 0, size = n;
    for (count = 0; count < size; count++)
    {
        printf("*");
    }
    for (count = size - 2; count > 0; count--)
    {
        printf("\n");
        printf("*");
        for (space = 1; space < count; space++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (count = 1; count == 1; count++)
    {
        printf("*");
    }
}
void get_full_pyramid(int n)
{
    int count = 0, space = 0, flash = 0, size = n;
    for (flash = 0; flash <= size; flash++)
    {
        for (space = size - 1; space >= flash; space--)
        {
            printf(" ");
        }
        for (count = 1; count <= flash; count++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void get_inverted_full_pyramid(int n)
{
    int count = 0, space = 0, flash = 1;
    int size = n;
    while (flash < n + 1)
    {
        for (count = 0; count < size; count++)
        {
            printf("* ");
        }
        printf("\n");
        for (space = 0; space < flash; space++)
        {
            printf(" ");
        }
        flash++;
        size--;
    }
}
void get_hollow_full_pyramid(int n)
{
    int count = 0, space = 0, size=n;
    for (count = 1; count <= size; count++)
    {
        for (space = count; space < size; space++)
        {
            printf(" ");
        }
        for (space = 1; space <= (2 * count - 1); space++)
        {
            if (count == size || space == 1 || space == (2 * count - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void main()
{
    int option = 0, n = 0;

    printf("\nEnter 1 for half pyramid");
    printf("\nEnter 2 for inverted half pyramid");
    printf("\nEnter 3 for hollow inverted half pyramid");
    printf("\nEnter 4 for full pyramid");
    printf("\nEnter 5 for inverted full pyramid");
    printf("\nEnter 6 for hollow full pyramid");
    printf("\nselect any one option : ");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("half pyramid\n");
        printf("Enter your size : ");
        scanf("%d", &n);
        get_half_pyramid(n);
    }
    else if (option == 2)
    {
        printf("inverted half pyramid\n");
        printf("Enter your size : ");
        scanf("%d", &n);
        get_inverted_half(n);
    }
    else if (option == 3)
    {
        printf("hollow inverted half pyramid\n");
        printf("Enter your size : ");
        scanf("%d", &n);
        get_hollow_inverted_half(n);
    }
    else if (option == 4)
    {
        printf("full pyramid\n");
        printf("Enter your size : ");
        scanf("%d", &n);
        get_full_pyramid(n);
    }
    else if (option == 5)
    {
        printf("inverted full pyramid");
        printf("\nEnter your size : ");
        scanf("%d", &n);
        get_inverted_full_pyramid(n);
    }
    else if (option == 6)
    {
        printf("hollow full pyramid");
        printf("\nEnter your size : ");
        scanf("%d", &n);
        get_hollow_full_pyramid(n);
    }
    else
    {
        printf("Invalid option");
    }
}