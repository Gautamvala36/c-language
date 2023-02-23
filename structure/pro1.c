//  Write a programe to take input of 3 countries time accpet hours , minutes.seconds , countryies first letter from user

#include <stdio.h>
#include <stdlib.h>
struct time
{
    int hours;
    float minutes_second;
    char letter;
};
void main()
{
    struct time t1, t2, t3;

    printf("Enter time of first countries\n");
    printf("Enter hours : ");
    scanf("%d", &t1.hours);
    printf("Enter minutes and second : ");
    scanf("%f", &t1.minutes_second);
    fflush(stdin);
    printf("Enter first letter : ");
    scanf("%c", &t1.letter);

    printf("Enter time of second countries\n");
    printf("Enter hours : ");
    scanf("%d", &t2.hours);
    printf("Enter minutes and second : ");
    scanf("%f", &t2.minutes_second);
    fflush(stdin);
    printf("Enter first letter : ");
    scanf("%c", &t2.letter);

    printf("Enter time of third countries\n");
    printf("Enter hours : ");
    scanf("%d", &t3.hours);
    printf("Enter minutes and second : ");
    scanf("%f", &t3.minutes_second);
    fflush(stdin);
    printf("Enter first letter : ");
    scanf("%c", &t3.letter);

    printf("\n\nThe time for first country is %d : %.2f and first letter is %c", t1.hours, t1.minutes_second, t1.letter);
    printf("\n\nThe time for second country is %d : %.2f and first letter is %c", t2.hours, t2.minutes_second, t2.letter);
    printf("\n\nThe time for third country is %d : %.2f and first letter is %c", t3.hours, t3.minutes_second, t3.letter);
}