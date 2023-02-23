// C program to calculate profit or loss

#include<stdio.h>

void main()
{
    int cp,sp,amount;   
    printf("Enter the cost price :");
    scanf("%d",&cp);
    printf("Enter the selling price :");
    scanf("%d",&sp);

    if (sp > cp)
    {
        amount= sp - cp;
        printf("Profit :%d",amount);
    }
    else if (cp > sp)
    {
        amount=cp - sp;
        printf("Loss :%d",amount);
    }
    else
    {
        printf("No profit No loss");
    }
    printf("\nGood by");
}
