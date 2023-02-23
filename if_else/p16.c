// calculater
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a,b,tamp;
    char op;           // Operator
    printf("Enter the value of A :");
    scanf("%d",&a);
    printf("Enter the value of B :");
    scanf("%d",&b);
    printf("Enter tha Operator [+,-,*,/] :");
    fflush(stdin);
    scanf("%c",&op);
    
    if (op == '+')
    {
        tamp = a + b;
        printf("This is ans of add :%d",tamp);
    }
    else if (op == '-')
    {
        tamp = a - b;
        printf("This is ans of sub :%d",tamp);
    }
    else if (op == '*')
    {
        tamp = a * b;
        printf("This is ans of mul :%d",tamp);
    }
    else if(op == '/')
    {
        tamp = a / b;
        printf("This is ans of div :%d",tamp);
    }
    else
    {
        printf("Invalid Choice :");
    }
    printf("\nGOOD BY..");

}