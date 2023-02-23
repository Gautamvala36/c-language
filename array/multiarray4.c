// Write a programe to take 5 cricketer run for 5 matches and find sum and lowest run scorer

#include <stdio.h>

void main()
{
    int size, n;
    {
        printf("Enter your cricketer match : ");
        scanf("%d", &n);
        printf("Enter your cricketer match run : ");
        scanf("%d", &size);
    }

    int cricketer[n][size], count = 0, flash = 0, sum[5], temp = 0;
    float average = 0;
    printf("\n");
    for (flash = 0; flash < n; flash++)
    {
        printf("Enter cricketer for matche %d\n", flash + 1);
        for (count = 0; count < size; count++)
        {
            printf("run of cricketer %d : ", count + 1);
            scanf("%d", &cricketer[flash][count]);
        }
    }
    printf("\n");

    {
        // printf("run of cricketer 2 : ");
        // scanf("%d", &cricketer[0][1]);
        // printf("run of cricketer 3 : ");
        // scanf("%d", &cricketer[0][2]);
        // printf("run of cricketer 4 : ");
        // scanf("%d", &cricketer[0][3]);
        // printf("run of cricketer 5 : ");
        // scanf("%d", &cricketer[0][4]);
    }

    for (flash = 0; flash < n; flash++)
    {
        printf("The match for cricketer %d\n", flash + 1);
        for (count = 0; count < size; count++)
        {
            printf("crickect %d run = %d\n", count + 1, cricketer[flash][count]);
        }
    }

    {
        // printf("\ncrickect 2 run = %d", cricketer[0][1]);
        // printf("\ncrickect 3 run = %d", cricketer[0][2]);
        // printf("\ncrickect 4 run = %d", cricketer[0][3]);
        // printf("\ncrickect 5 run = %d", cricketer[0][4]);
    }

    flash = 0;
    do
    {
        sum[flash] = 0;
        count = 0;
        do
        {
            sum[flash] = sum[flash] + cricketer[flash][count];
            count++;
        } while (count < size);
        printf("\nthe total of cricketer %d is %d ", flash + 1, sum[flash]);
        flash++;
    } while (flash < n);

    {
        // sum[0] = sum[0] + cricketer[0][1];
        // sum[0] = sum[0] + cricketer[0][1];
        // sum[0] = sum[0] + cricketer[0][2];
        // sum[0] = sum[0] + cricketer[0][3];
        // sum[0] = sum[0] + cricketer[0][4];
    }

    printf("\n");

  
    for (flash = 0; flash < n; flash++)
    {
        average = average + sum[flash];
    }
    average = average / n;
    printf("\nThe all metch run average is %.2f", average);

    printf("\n");
    for (flash = 0; flash < n; flash++)
    {
        for (count = 0; count < size; count++)
        {
            if (cricketer[flash][0] > cricketer[flash][count])
            {
                temp = cricketer[flash][0];
                cricketer[flash][0] = cricketer[flash][count];
                cricketer[flash][count] = temp;
            }
        }
        printf("\nThe match %d lowest run scorer : %d", flash + 1, cricketer[flash][0]);
    }

    {
        // printf("\nThe match 2 lowest run scorer : %d", cricketer[1][0]);
        // printf("\nThe match 3 lowest run scorer : %d", cricketer[2][0]);
        // printf("\nThe match 4 lowest run scorer : %d", cricketer[3][0]);
        // printf("\nThe match 5 lowest run scorer : %d", cricketer[4][0]);

        // if (cricketer[0][0] > cricketer[0][2])
        // {
        //     temp = cricketer[0][0];
        //     cricketer[0][0] = cricketer[0][2];
        //     cricketer[0][2] = temp;
        // }
        // if (cricketer[0][0] > cricketer[0][3])
        // {
        //     temp = cricketer[0][0];
        //     cricketer[0][0] = cricketer[0][3];
        //     cricketer[0][3] = temp;
        // }
        // if (cricketer[0][0] > cricketer[0][4])
        // {
        //     temp = cricketer[0][0];
        //     cricketer[0][0] = cricketer[0][4];
        //     cricketer[0][4] = temp;
        // }

        // for (count = 0; count > 5; count++)
        // {
        //     if (cricketer[1][0] > cricketer[0][count])
        //     {
        //         temp = cricketer[1][0];
        //         cricketer[1][0] = cricketer[0][count];
        //         cricketer[0][count] = temp;
        //     }
        // }
        // printf("\nThe lowest run scorer : %d", cricketer[1][0]);
    }

    for (count = 0; count < n; count++)
    {
        if (cricketer[0][0] > cricketer[count][0])
        {
            temp = cricketer[0][0];
            cricketer[0][0] = cricketer[count][0];
            cricketer[count][0] = temp;
        }
    }
    printf("\n\nThe lowest all metch run : %d", cricketer[0][0]);
}