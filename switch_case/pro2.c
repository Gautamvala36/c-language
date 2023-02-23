// write a program to make using switch case
// 1.add
// 2.sub
// 3.mul
// 4.div
// 5.module
// 6.min
// 7.max
// 8.equal
// 9.all option

#include <stdio.h>

void main()
{
    int num1, num2, option;
    float ans;

    printf("Enter The Value Of Num1 : ");
    scanf("%d", &num1);
    printf("Enter The Value Of Num2 : ");
    scanf("%d", &num2);

    printf("Enter 1 For Add \nEnter 2 For Sub \nEnter 3 For Mul \nEnter 4 For Div \nEnter 5 For Module \nEnter 6 For Min \nEnter 7 For Max \nEnter 8 For Equal \nEnter 9 For All Option");
    printf("\nSelect The Option : ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        ans = num1 + num2;
        printf("Your Ans Is Add :%.2f", ans);
        break;
    case 2:
        ans = num1 - num2;
        printf("Your Ans Is Sub :%.2f", ans);
        break;
    case 3:
        ans = num1 * num2;
        printf("Your Ans Is Mul :%.2f", ans);
        break;
    case 4:
        ans = num1 / num2;
        printf("Your Ans Is Div :%.2f", ans);
        break;
    case 5:
        ans = num1 % num2;
        printf("Your Ans Is Module :%.2f", ans);
        break;
    case 6:
        ans = num1 < num2;
        printf("Your Ans Is Min :%.2f", ans);
        break;
    case 7:
        ans = num1 > num2;
        printf("Your Ans Is Max :%.2f", ans);
        break;
    case 8:
        ans = num1 == num2;
        printf("Your Ans Is Equal :%.2f", ans);
        ans = num1 != num2;
        printf("Your Ans Is Not Equal :%.2f", ans);
        break;
    case 9:
        ans = num1 + num2;
        printf("1.Your Ans Is Add :%.2f", ans);
        ans = num1 - num2;
        printf("\n2.Your Ans Is Sub :%.2f", ans);
        ans = num1 * num2;
        printf("\n3.Your Ans Is Mul :%.2f", ans);
        ans = num1 / num2;
        printf("\n4.Your Ans Is Div :%.2f", ans);
        ans = num1 % num2;
        printf("\n5.Your Ans Is Module :%.2f", ans);
        ans = num1 < num2;
        printf("\n6.Your Ans Is Min :%.2f", ans);
        ans = num1 > num2;
        printf("\n7.Your Ans Is Max :%.2f", ans);
        ans = num1 == num2;
        printf("\n8.Your Ans Is Equal :%.2f", ans);
        ans = num1 != num2;
        printf("\n9.Your Ans Is Not Equal :%.2f", ans);
        break;

    default:
        printf("Invalid Option");
        break;
    }
    printf("\nGood By..");
}