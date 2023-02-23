#include <stdio.h>

void main()
{

    int A, B, C, D, E, F;

    printf("enter the current year :");
    scanf("%d", &A);
    printf("enter the current month :");
    scanf("%d", &C);
    printf("enter the current date :");
    scanf("%d", &E);

    printf("enter the birth year of the person :");
    scanf("%d", &B);
    printf("enter the birth month of the person :");
    scanf("%d", &D);
    printf("enter the birth date of the person :");
    scanf("%d", &F);

    printf("The years of the person is: %d", A - B);   //  current year-birth year
    printf("\nThe month of the person is: %d",  D-C); //  current month-birth month
    printf("\nThe day of the person is: %d", F-E);   //  current day-birth day
}