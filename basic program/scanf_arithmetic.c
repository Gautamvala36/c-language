#include<stdio.h>

void main()
{
    int A,B,Add,Sub,Mul,Div;
    
    printf("Enter the value of A :");
    scanf("%d",&A);
    printf("Enter the value of B :");
    scanf("%d",&B);
    Add=A+B;
    printf("Enter the Add Ans=A+B : %d",Add);
    Sub=A-B;
    printf("\nEnter the Sub Ans=A-B : %d",Sub);
    Mul=A*B;
    printf("\nEnter the Mul Ans=A*B : %d",Mul);
    Div=A/B;
    printf("\nEnter the Div Ans=A/B : %d",Div);

}