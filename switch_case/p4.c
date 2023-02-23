#include <stdio.h>

void main()
{
    int id, password;
    int num;

    printf("Enter The Enrollment No : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Enter Your ID : ");
        scanf("%d", &id);
        switch (id)
        {
        case 101:
            printf("Enter Your Password : ");
            scanf("%d", &password);
            switch (password)
            {
            case 1020:
                printf("Welcome Dear Programmer\n");
                printf("Name : Vala Gautam\nEnrollment No : 1\nMo : 8780982845");
                break;

            default:
                printf("Incorrect Password");
                break;
            }
            break;
        default:
            printf("Incorrect ID");
            break;
        }
        break;

    default:
        printf("Incrrect Enrollment No");
        break;
    }
    printf("\nGood By..");
}