// write a program to findout 5 student's 5 subject mark

#include <stdio.h>

void main()
{
    int size;
    {
        printf("Enter your student : ");
        scanf("%d", &size);
    }

    int student[size][size], count = 0, flash = 0;

    for (flash = 0; flash < size; flash++)
    {
        printf("Enter mark for student %d\n", flash + 1);
        while (count < size)
        {
            printf("For subject %d : ", count + 1);
            scanf("%d", &student[flash][count]);
            count++;
        }
        count = 0;
    }

    {
        // {
        // printf("\nfor subject 2 mark : ");
        // scanf("%d", &student[0][1]);
        // printf("\nfor subject 3 mark : ");
        // scanf("%d", &student[0][2]);
        // printf("\nfor subject 4 mark : ");
        // scanf("%d", &student[0][3]);
        // printf("\nfor subject 5 mark : ");
        // scanf("%d", &student[0][4]);
        // }

        // count = 0;
        // printf("Enter mark student 2\n");
        // while (count < 5)
        // {
        //     printf("for subject %d : ", count + 1);
        //     scanf("%d", &student[1][count]);
        //     count++;
        // }
        // {
        // printf("for subject 2 : ");
        // scanf("%d", &student[1][1]);
        // printf("for subject 3 : ");
        // scanf("%d", &student[1][2]);
        // printf("for subject 4 : ");
        // scanf("%d", &student[1][3]);
        // printf("for subject 5 : ");
        // scanf("%d", &student[1][4]);
        // }

        // printf("Enter mark student 3\n");
        // count = 0;
        // while (count < 5)
        // {
        //     printf("for subject %d : ", count + 1);
        //     scanf("%d", &student[2][count]);
        //     count++;
        // }
        // {
        // printf("for subject 2 : ");
        // scanf("%d", &student[2][1]);
        // printf("for subject 3 : ");
        // scanf("%d", &student[2][2]);
        // printf("for subject 4 : ");
        // scanf("%d", &student[2][3]);
        // printf("for subject 5 : ");
        // scanf("%d", &student[2][4]);
        // }

        // printf("Enter mark student 4\n");
        // count = 0;
        // while (count < 5)
        // {
        //     printf("for subject %d : ", count + 1);
        //     scanf("%d", &student[3][count]);
        //     count++;
        // }
        // {
        // printf("for subject 2 : ");
        // scanf("%d", &student[3][1]);
        // printf("for subject 3 : ");
        // scanf("%d", &student[3][2]);
        // printf("for subject 4 : ");
        // scanf("%d", &student[3][3]);
        // printf("for subject 5 : ");
        // scanf("%d", &student[3][4]);
        // }

        // printf("Enter mark student 5\n");
        // count = 0;
        // while (count < 5)
        // {
        //     printf("for subject %d : ", count + 1);
        //     scanf("%d", &student[4][count]);
        //     count++;
        // }
        // {
        // printf("for subject 2 : ");
        // scanf("%d", &student[4][1]);
        // printf("for subject 3 : ");
        // scanf("%d", &student[4][2]);
        // printf("for subject 4 : ");
        // scanf("%d", &student[4][3]);
        // printf("for subject 5 : ");
        // scanf("%d", &student[4][4]);
        // }
    }

    for (flash = 0; flash < size; flash++)
    {
        printf("\nThe mark for student %d", flash + 1);
        for (count = 0; count < size; count++)
        {
            printf("\nsubject %d = %d", count + 1, student[flash][count]);
        }
    }

    {
        // printf("\nsubject 2 : %d",student[0][1]);
        // printf("\nsubject 3 : %d",student[0][2]);
        // printf("\nsubject 4 : %d",student[0][3]);
        // printf("\nsubject 5 : %d",student[0][4]);

        // printf("\nThe mark for student 2");
        // for (count = 0; count < 5; count++)
        // {
        //     printf("\nsubject %d = %d", count + 1, student[1][count]);
        // }
        // {
        // printf("\nsubject 2 = %d",student[1][1]);
        // printf("\nsubject 3 = %d",student[1][2]);
        // printf("\nsubject 4 = %d",student[1][3]);
        // printf("\nsubject 5 = %d",student[1][4]);
        // }

        // printf("\nThe mark for student 3");
        // for (count = 0; count < 5; count++)
        // {
        //     printf("\nsubject %d = %d", count + 1, student[2][count]);
        // }
        // {
        // printf("\nsubject 2 = %d", student[2][1]);
        // printf("\nsubject 3 = %d", student[2][2]);
        // printf("\nsubject 4 = %d", student[2][3]);
        // printf("\nsubject 5 = %d", student[2][4]);
        // }

        // printf("\nThe mark for student 4");
        // for (count = 0; count < 5; count++)
        // {
        //     printf("\nsubject %d = %d", count + 1, student[3][count]);
        // }
        // {
        // printf("\nsubject 2 = %d",student[3][1]);
        // printf("\nsubject 3 = %d",student[3][2]);
        // printf("\nsubject 4 = %d",student[3][3]);
        // printf("\nsubject 5 = %d",student[3][4]);
        // }

        // printf("\nThe mark for student 5");
        // for (count = 0; count < 5; count++)
        // {
        //     printf("\nsubject %d = %d", count + 1, student[4][count]);
        // }
        // {
        // printf("\nsubject 2 = %d",student[4][1]);
        // printf("\nsubject 3 = %d",student[4][2]);
        // printf("\nsubject 4 = %d",student[4][3]);
        // printf("\nsubject 5 = %d",student[4][4]);
        // }
    }
}
