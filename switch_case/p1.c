#include <stdio.h>

void main()
{
    int d,c,op;
    double a, b, ans;

    printf("a : ");
    scanf("%lf", &a);
    printf("b : ");
    scanf("%lf", &b);
    printf("c : ");
    scanf("%d", &c);
    printf("d : ");
    scanf("%d", &d);
    printf("1 div 2 mod :");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        ans = a / b;
        printf("ans : %.2lf", ans);
        break;
    case 2:
        ans = c % d;
        printf("\nans : %.2lf", ans);
        break;
    default:
        printf("\nInvalid");
        break;
    }
    printf("\nGood");
}

