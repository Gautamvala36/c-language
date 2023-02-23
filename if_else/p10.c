// C program to check whether a triangle is valid or not using logical AND operato
// Property of triangle 
// a + b > c
// a + c > b 
// b + c > a

#include<stdio.h>

void main()
{
    int side1,side2,side3;

    printf("Enter the three side :");
    scanf("%d%d%d",&side1,&side2,&side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("It is valid");
    }
    else
    {
        printf("It is not valid");
    }
    printf("\nGood By..");
}