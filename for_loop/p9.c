// write a program to print pattens
// 5432112345
// 4321  1234
// 321    123
// 21      12
// 1        1
#include <stdio.h>

void main()
{
    int i, j, n = 5;

    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >=1 ; j--)
        {
            printf("%d", j);
        }

        for (j = n * 2; j > i * 2 ; j--)
        {
            printf(" ");
        }
        
      for (j = 1; j <=i ; j++)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
}