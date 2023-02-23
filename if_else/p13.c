//  C program to calculate gross salary of an employee
//     gross = basic + hra + da;

#include<stdio.h>

void main()
{
    
    int basic,month,hra,da,years;
    char name[20];

    printf("Enter the Employee Name :");
    gets(name);
    printf("Enter Basic Salary: ");
    scanf("%d",&basic);

    if (basic <= 10000)
    {
        da = basic * 0.8;
        hra = basic *0.2;
    }
    else if (basic <= 20000)
    {
        da = basic * 0.85;
        hra = basic *0.25;
    }
    else if (basic <= 30000)
    {
        da = basic * 0.9;
        hra = basic * 0.3;
    }
    else
    {
        da = basic *0.95;
        hra = basic * 0.35;
    }
    
    month= basic + hra + da;
    years  = month * 12;
    printf("Employee Name :%s",name);
    printf("\nBasic Salary :%d",basic);
    printf("\nMonth SALARY OF EMPLOYEE :%d",month);
    printf("\nYears SALARY OF EMPLOYEE :%d",years);
    printf("\nThenk's you");
}