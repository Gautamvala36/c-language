// writw program to search element in array

#include <stdio.h>

void main()
{
    int num[100], n, count = 0, tosearch, found = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Enter the element array : ");
    for (count = 0; count < n; count++)
    {
        scanf("%d", &num[count]);
    }

    printf("Enter the search number : ");
    scanf("%d", &tosearch);

    for (count = 0; count < n; count++)
    {
        if (num[count] == tosearch)
        {
            found = 1;
            break;
        }
    }

    if(found==1)
    {
        printf("\n%d is found at position : %d",tosearch,count+1);
    }
    else
    {
        printf("\n%d is not found in the number",tosearch);
    }
    
}