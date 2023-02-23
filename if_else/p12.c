// C program to enter marks of five subjects and find percentage and grade
// Total = marks1 + marks2 + marks3 + marks4 + marks5
// Average = Total / 5.0
// Percentage = (Total / 500.0) x 100

#include<stdio.h>

void main()
{
    int phy,chem,bio,math,comp;
    float Total,Average,Percentage;
    char grade;

    // subject mark
    printf("Entre the Mark of phy   :");
    scanf("%d",&phy);
    printf("Entre the Mark of chem  :");
    scanf("%d",&chem);
    printf("Entre the Mark of bio   :");
    scanf("%d",&bio);
    printf("Entre the Mark of math  :");
    scanf("%d",&math);
    printf("Entre the Mark of comp  :");
    scanf("%d",&comp);

    Total = phy+chem+bio+math+comp;
    Average = Total / 5;
    Percentage = (Total/500)*100;

    if(Average >=90)
    {
        grade = 'A';
    }
    else if(Average >=80 && Average <90)
    {
        grade = 'B';
    }
    else if(Average >=70 && Average <80)
    {
        grade = 'c';
    }
    else if(Average >=50 && Average <70)
    {
        grade = 'D';
    }
    else if(Average >=40 && Average <50)
    {
        grade = 'E';
    }
    else if(Average >=0 && Average <30)
    {
        grade ='F';
        printf("Sorry you are Faill %c",grade);
    }
    else
    {
        printf("\nGood by..");
    }
    
    printf("\nTotal mark is        : %.2f / 500.00",Total);
    printf("\nThe Average marks is : %.2f",Average);
    printf("\nThe Percentage is    : %.2f%%",Percentage);
    printf("\nThe Grade is         : %c",grade);
}