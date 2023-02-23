// bmi calculator
// bmi=kg/m2
// foot to centimeter     5=152.4
// centimeter to meter    152.4=1.524
// meter = ans*ans        1.524*1.524

#include<stdio.h>

void main()
{
    float weigth=50, height=2.32,bmi;   
    printf("this is weigth ans :%f",weigth);    
    printf("\nthis is height ans :%f",height);    
    

    bmi=weigth/height;

    printf("\nEnter the ans : %f",bmi);

}
