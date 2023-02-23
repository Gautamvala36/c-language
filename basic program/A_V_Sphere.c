// Volume of Sphere = 4/3 * PI * R3

#include<stdio.h>

void main()
{
    int R,tamp;
    printf("Enter the value of R : ");
    scanf("%d",&R);

    tamp=4.0/3.0*3.14 *(R*R*R);

    printf("Enter the value of Volume of Spheres : %d ",tamp);    
}