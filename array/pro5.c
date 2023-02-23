// write a program to sort accept name as input from user and print

#include <stdio.h>

void main()
{
    char name[20], count = 0;

    printf("Enter Your Name : ");
    while (count < 20)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
        count++;
    }

    {
        // scanf("%c", &name[1]);
        // scanf("%c", &name[2]);
        // scanf("%c", &name[3]);
        // scanf("%c", &name[4]);
        // scanf("%c", &name[5]);
    }

    printf("\nYour Name is : ");
    for (count = 0; count < 20; count++)
    {
        if (name[count] == '\n')
        {
            break;
        }
        printf("%c", name[count]);
    }
}