// Write a programe to find bmi of user and give him/her his category of weight
// bmi = weight / height*height -> height in meter
// inch to meter = divide the length value by 39.37
// foot to meter = for an approximate result, divide the length value by 3.281

#include <stdio.h>

float getmeter(int foot, int inch)
{
    float meter;
    meter = (inch / 39.37) + (foot / 3.281);
    return meter;
}
float getbmi(float weigth, float meter)
{
    return weigth / (meter * meter);
}
void category(float bmi)
{
    if (bmi <= 18.5)
        printf("\nYou are underweigth");
    else if (bmi > 18.5 && bmi <= 24.9)
        printf("\nYou are normalweigth");
    else if (bmi > 24.9 && bmi <= 29.9)
        printf("\nYou are overweigth");
    else if (bmi > 29.9 && bmi <= 34.9)
        printf("\nYou are obesity");
    else if (bmi > 34.9)
        printf("\nYou are extreme obesity");
}
void main()
{
    int foot, inch;
    float weigth, meter, bmi;

    printf("Enter value of foot : ");
    scanf("%d", &foot);
    printf("Enter value of inch : ");
    scanf("%d", &inch);
    printf("Enter value of weigth : ");
    scanf("%f", &weigth);

    meter = getmeter(foot, inch);
    printf("\nThe value of meter : %f", meter);

    bmi = getbmi(weigth, meter);
    printf("\nThe value of bmi : %f", bmi);

    category(bmi);
}