// write a program to menu driven calculator using char

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2;
    float ans;
    char choice = 'c';

    while (choice == 'c')
    {
        printf("\nEnter the value of num1 : ");
        scanf("%d", &num1);
        printf("Enter the value of num2 : ");
        scanf("%d", &num2);
        printf("\n Enter value 1 add");
        printf("\n Enter value 2 sub");
        printf("\n Enter value 3 mul");
        printf("\n Enter value 4 div");
        printf("\n Select any choice : ");
        fflush(stdin);
        scanf("%c", &choice);

        if (choice == '1')
        {
            ans = num1 + num2;
            printf("ans is %.2f", ans);
        }
        else if (choice == '2')
        {
            ans = num1 - num2;
            printf("ans is %.2f", ans);
        }
        else if (choice == '3')
        {
            ans = num1 * num2;
            printf("ans is %.2f", ans);
        }

        else if (choice == '4')
        {
            ans = num1 / num2;
            printf("ans is %.2f", ans);
        }

        else
        {
            printf("Invalid");
            fflush(stdin);
            printf("\nSelect your way\npress c for countiune : ");
            scanf("%c", &choice);
        }
        printf("\nGood By..");
    }
}