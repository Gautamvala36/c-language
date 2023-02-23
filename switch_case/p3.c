#include <stdio.h>

void main()
{
    int id;
    int password ;

    printf("\nEnter The Id : ");
    scanf("%d",&id);
    switch (id)
    {
    case 1:
        printf("Enter The Password : ");
        scanf("%d",&password);
        switch (password)
        {
        case 123:
            printf("Welcome Dear Programmer\n");
            break;
        
        default:
            printf("Incorrect Password");
            break;
        }
        break;
    case 2:
        printf("Enter The Password : ");
        scanf("%d",&password);
        switch (password)
        {
        case 456:
            printf("Welcome Dear Programmer\n");
            break;
        
        default:
            printf("Incorrect Password");
            break;
        }
        break;
    default:
        printf("Incorrect Id");
        break;
    }
}