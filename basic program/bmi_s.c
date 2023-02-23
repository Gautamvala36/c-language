// bmi calculator
// bmi=kg/m2
// foot to centimeter     5=152.4
// centimeter to meter    152.4=1.524
// meter = ans*ans        1.524*1.524

#include <stdio.h>

void main()
{
    float weigth, height, bmi;
    printf("this is weigth ans :");
    scanf("%f", &weigth);
    printf("this is height ans :");
    scanf("%f", &height);

    bmi = weigth / height;

    printf("\nEnter the ans : %f", bmi);
}