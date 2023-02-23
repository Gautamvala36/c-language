// write a program to print inverted half pyramid
//     *
//    **
//   ***
//  ****
// *****
#include <stdio.h>

void main()
{
    int count=0, flash=5;
    while (flash > 0)
    {
        while (count <flash)
        {
            printf(" ");
            count=count+1;
        }
        while (count <=5)
        {
            printf("*");
            count = count + 1;
        }
        printf("\n");
        count = 0;
        flash--;
    }
    printf("Good By..");
}
