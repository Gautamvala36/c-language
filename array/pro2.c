// write a program to findout sum and average of 5 student marks

#include <stdio.h>

void main()
{
    int student[5], count = 0, sum = 0;
    float average;

    for (count = 0; count < 5; count++)
    {
        printf("Enter the mark of student %d : ", count + 1);
        scanf("%d", &student[count]);
    }

    { // printf("Enter the mark of student 2 : ");
        // scanf("%d",&student[1]);
        // printf("Enter the mark of student 3 : ");
        // scanf("%d",&student[2]);
        // printf("Enter the mark of student 4 : ");
        // scanf("%d",&student[3]);
        // printf("Enter the mark of student 5 : ");
        // scanf("%d",&student[4]);
    }

    for (count = 0; count < 5; count++)
    {
        printf("\nThe mark of student %d is %d", count + 1, student[count]);
    }

    { // printf("\nThe mark of student 2 : %d",student[1]);
        // printf("\nThe mark of student 3 : %d",student[2]);
        // printf("\nThe mark of student 4 : %d",student[3]);
        // printf("\nThe mark of student 5 : %d",student[4]);
    }

    count = 0;
    while (count < 5)
    {
        sum = sum + student[count];
        count++;
    }

    { // sum = sum + student[1];
        // sum = sum + student[2];
        // sum = sum + student[3];
        // sum = sum + student[4];
    }

    printf("\nThe value of sum is : %d", sum);
    average = sum / 5;
    printf("\nThe value of average is : %.2f", average);
}