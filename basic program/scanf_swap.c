#include<stdio.h>

void main()
{
    int a, b, tamp;
    
    printf("Enter a value : ");
    scanf("%d",&a);
    printf("Enter b value : ");
    scanf("%d",&b);

    tamp=a;
    a=b;
    b=tamp;

    printf("Enter the value of a : %d",a);
    printf("\nEnter the vlaue of b : %d",b);
}