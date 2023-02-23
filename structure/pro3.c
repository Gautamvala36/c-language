//  Write a programe to take input of 3 countries time accpet hours , minutes.seconds , countryies first letter from user
// Example of array whitin structure

#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours;
    float minutes_second;
    char letter[20];
};
void main()
{
    struct time t[3];
    int count = 0;

    for (count = 0; count < 3; count++)
    {
        printf("Enter time of %d countries\n", count + 1);
        printf("Enter hours : ");
        scanf("%d", &t[count].hours);
        printf("Enter minutes and second : ");
        scanf("%f", &t[count].minutes_second);
        fflush(stdin);
        printf("Enter first letter : ");
        scanf("%s", &t[count].letter);
    }
    for (count = 0; count < 3; count++)
    {
        printf("\n\nThe time for %d country is %d : %.2f and first letter is %s", count + 1, t[count].hours, t[count].minutes_second, t[count].letter);
    }
    
    // printf("Enter time of second countries\n");
    // printf("Enter hours : ");
    // scanf("%d", &t[1].hours);
    // printf("Enter minutes and second : ");
    // scanf("%f", &t[1].minutes_second);
    // fflush(stdin);
    // printf("Enter first letter : ");
    // scanf("%c", &t[1].letter);

    // printf("Enter time of third countries\n");
    // printf("Enter hours : ");
    // scanf("%d", &t[2].hours);
    // printf("Enter minutes and second : ");
    // scanf("%f", &t[2].minutes_second);
    // fflush(stdin);
    // printf("Enter first letter : ");
    // scanf("%c", &t[2].letter);

    // printf("\n\nThe time for second country is %d : %.2f and first letter is %c", t[1].hours, t[1].minutes_second, t[1].letter);
    // printf("\n\nThe time for third country is %d : %.2f and first letter is %c", t[2].hours, t[2].minutes_second, t[2].letter);
}