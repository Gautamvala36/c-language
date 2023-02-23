// Area of Trapezium = 1/2 * (A + B) * H

#include<stdio.h>

void main()
{
    int A, B, H,tamp;
    printf("Enter the value of A : ");
    scanf("%d",&A);
    printf("Enter the value of B : ");
    scanf("%d",&B);
    printf("Enter the value of H : ");
    scanf("%d",&H);

    tamp=1/2 * (A + B) * H;

    printf("Enter the value of Area of Trapezium : %d ",tamp);    
}