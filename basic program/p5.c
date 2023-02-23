// write a program to find compound interest
//  tamp = p*pow(1+(r/100), t);

#include<stdio.h>
#include<math.h>

void main()
{
    float p, t, r, tamp;

    printf("Enter the p :");    // p=principal amount
    scanf("%f",&p);
    printf("Enter the r :");    // r=rate of interest
    scanf("%f",&r);
    printf("Enter the t :");    // t=time period
    scanf("%f",&t);

    tamp = p*(pow(1+(r/100), t));

    printf("Enter the value of compound interest :%f",tamp);
}