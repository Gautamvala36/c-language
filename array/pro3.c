// write a program to accept 5 cricketer run and find sum and average also find highest run scorer

#include <stdio.h>

void main()
{
    int cricketer[5], count = 0, sum = 0;
    float average;

    for (count = 0; count < 5; count++)
    {
        printf("Enter the run of cricketer %d : ", count + 1);
        scanf("%d", &cricketer[count]);
    }

    {
        // printf("Enter the run of cricketer 2: ");
        // scanf("%d",&cricketer[1]);
        // printf("Enter the run of crickrter 3: ");
        // scanf("%d",&cricketer[2]);
        // printf("Enter the run of crickrter 4: ");
        // scanf("%d",&cricketer[3]);
        // printf("Enter the run of crickrter 5: ");
        // scanf("%d",&cricketer[4]);
    }

    for (count = 0; count < 5; count++)
    {
        printf("\nThe run of cricketer %d is %d", count + 1, cricketer[count]);
    }

    {
        // printf("\nThe run of cricketer 2: %d", cricketer[1]);
        // printf("\nThe run of cricketer 3: %d", cricketer[2]);
        // printf("\nThe run of cricketer 4: %d", cricketer[3]);
        // printf("\nThe run of cricketer 5: %d", cricketer[4]);
    }

    count = 0;
    while (count < 5)
    {
        sum = sum + cricketer[count];
        count++;
    }

    {
        // sum=sum+cricketer[1];
        // sum=sum+cricketer[2];
        // sum=sum+cricketer[3];
        // sum=sum+cricketer[4];
    }

    printf("\nThe value of sum : %d", sum);
    average = sum / 5;
    printf("\nThe value of cricketer average : %.2f", average);

    for (count = 0; count < 5; count++)
    {
        if (cricketer[0] < cricketer[count])
        {
            cricketer[0] = cricketer[count];
        }
    }
    printf("\ncricketer highest run scorer : %d", cricketer[0]);
}