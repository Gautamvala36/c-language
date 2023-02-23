// write a program to print star pattern
// ******
//   ****
//    ***
//     **
//      *
#include <stdio.h>

void main()
{
    int i, j, n =7;

    printf("Enter the star number : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
       
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}