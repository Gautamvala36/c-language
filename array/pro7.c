// write a program to take name as an input from user and print it in reverse

#include <stdio.h>

void main()
{
    char name[20], count = 0, copy_variable;

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
        // printf("Enter Your Name : ");
        // scanf("%c", &name[1]);
        // printf("Enter Your Name : ");
        // scanf("%c", &name[2]);
        // printf("Enter Your Name : ");
        // scanf("%c", &name[3]);
        // printf("Enter Your Name ");
        // scanf("%c", &name[4]);
    }
    copy_variable = count - 1;

    printf("Name Is Reverse : ");
    for (count = copy_variable; count >= 0; count--)
    {
        printf("%c", name[count]);
    }
}