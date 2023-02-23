// example of with arguments with return value function
// write a program to find create a menu driven calculator using function

#include <stdio.h>
int get_add(int a, int b)
{
    int ans = a + b;
    return ans;
}
int get_sub(int a, int b)
{
    int ans = a - b;
    return ans;
}
int get_mul(int a, int b)
{
    int ans = a * b;
    return ans;
}
int get_div(int a, int b)
{
    int ans = a / b;
    return ans;
}
void main()
{
    int num1, num2, option = 0, ans, count = 0, op = 0;

    for (count = 0; option != 5; count++)
    {
        printf("\nEnter the number 1 : ");
        scanf("%d", &num1);
        printf("Enter the number 2 : ");
        scanf("%d", &num2);

        printf("Enter 1 for add");
        printf("\nEnter 2 for sub");
        printf("\nEnter 3 for mul");
        printf("\nEnter 4 for div");
        printf("\nEnter 5 to exit");
        printf("\nSelect the one option : ");
        scanf("%d", &option);

        if (option == 1)
        {
            ans = get_add(num1, num2);
            printf("Your answer : %d", ans);
        }
        else if (option == 2)
        {
            ans = get_sub(num1, num2);
            printf("Your answer : %d", ans);
        }
        else if (option == 3)
        {
            ans = get_mul(num1, num2);
            printf("Your answer : %d", ans);
        }
        else if (option == 4)
        {
            ans = get_div(num1, num2);
            printf("Your asnwer : %d", ans);
        }
        else if (op == 5)
        {
            break;
        }
        else
        {
            printf("Invalid option");
        }
    }
}