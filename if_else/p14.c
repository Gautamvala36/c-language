// Month and week 
#include<stdio.h>

void main()
{
    int month,days;

    printf("Enter the month :");
    scanf("%d",&month);

    if (month == 1)
    {
                
        printf("January");
        printf("\ndays = 31");
        printf("\nSunday    : 1 \t8 \t15 \t22 \t29,\nMonday    : 2 \t9 \t16 \t23 \t30,\nTuesday   : 3 \t10 \t17 \t24 \t31,\nWednesday : 4 \t11 \t18 \t25,\nThursday  : 5 \t12 \t19 \t26,\nFriday    : 6 \t13 \t20 \t27,\nSaturday  : 7 \t14 \t21 \t28,");     
    }
    else if (month == 2)
    {
        printf("February");
        printf("\ndays = 28");
        printf("\nSunday    : ~ \t5 \t12 \t19 \t26,\nMonday    : ~ \t6 \t13 \t20 \t27,\nTuesday   : ~ \t7 \t14 \t21 \t28,\nWednesday : 1 \t8 \t15 \t22,\nThursday  : 2 \t9 \t16 \t23,\nFriday    : 3 \t10 \t17 \t24,\nSaturday  : 4 \t11 \t18 \t25,");
    }
    else if (month == 3)
    {
        printf("March");
        printf("\ndays = 31");
        printf("\nSunday    : ~ \t5 \t12 \t19 \t26,\nMonday    : ~ \t6 \t13 \t20 \t27,\nTuesday   : ~ \t7 \t14 \t21 \t28,\nWednesday : 1 \t8 \t15 \t22 \t29,\nThursday  : 2 \t9 \t16 \t23 \t30,\nFriday    : 3 \t10 \t17 \t24 \t31,\nSaturday  : 4 \t11 \t18 \t25,");
    }
    else if (month == 4)
    {
        printf("April");
        printf("\ndays = 30");
        printf("\nSunday    : ~ \t2 \t9 \t16 \t23 \t30,\nMonday    : ~ \t3 \t10 \t17 \t24,\nTuesday   : ~ \t4 \t11 \t18 \t25,\nWednesday : ~ \t5 \t12 \t19 \t26,\nThursday  : ~ \t6 \t13 \t20 \t27,\nFriday    : ~ \t7 \t14 \t21 \t28,\nSaturday  : 1 \t8 \t15 \t22 \t29,");
    }
    else if (month == 5)
    {
        printf("May");
        printf("\ndays = 31");
        printf("\nSunday    : ~ \t7 \t14 \t21 \t28,\nMonday    : 1 \t8 \t15 \t22 \t29,\nTuesday   : 2 \t9 \t16 \t23 \t30,\nWednesday : 3 \t10 \t17 \t24 \t31,\nThursday  : 4 \t11 \t18 \t25,\nFriday    : 5 \t12 \t19 \t26,\nSaturday  : 6 \t13 \t20 \t27,");
    }
    else if (month == 6)
    {
        printf("June");
        printf("\ndays = 30");
        printf("\nSunday    : ~ \t4 \t11 \t18 \t25,\nMonday    : ~ \t5 \t12 \t19 \t26,\nTuesday   : ~ \t6 \t13 \t20 \t27,\nWednesday : ~ \t7 \t14 \t21 \t28,\nThursday  : 1 \t8 \t15 \t22 \t29,\nFriday    : 2 \t9 \t16 \t23 \t30,\nSaturday  : 3 \t10 \t17 \t24,");
    }
    else if (month == 7)
    {
        printf("July");
        printf("\ndays = 31");
        printf("\nSunday    : ~ \t2 \t9 \t16 \t23 \t30,\nMonday    : ~ \t3 \t10 \t17 \t24 \t31,\nTuesday   : ~ \t4 \t11 \t18 \t25,\nWednesday : ~ \t5 \t12 \t19 \t26,\nThursday  : ~ \t6 \t13 \t20 \t27,\nFriday    : ~ \t7 \t14 \t21 \t28,\nSaturday  : 1 \t8 \t15 \t22 \t29,");
    }
    else if (month == 8)
    {
        printf("August");
        printf("\ndays = 31");
        printf("\nSunday    : ~ \t6 \t13 \t20 \t27,\nMonday    : ~ \t7 \t14 \t21 \t28,\nTuesday   : 1 \t8 \t15 \t22 \t29,\nWednesday : 2 \t9 \t16 \t23 \t30,\nThursday  : 3 \t10 \t17 \t24 \t31,\nFriday    : 4 \t11 \t18 \t25,\nSaturday  : 5 \t12 \t19 \t26,");
    }
    else if (month == 9)
    {
        printf("September");
        printf("\ndays = 30");
        printf("\nSunday    : ~ \t3 \t10 \t17 \t24,\nMonday    : ~ \t4 \t11 \t18 \t25,\nTuesday   : ~ \t5 \t12 \t19 \t26,\nWednesday : ~ \t6 \t13 \t20 \t27,\nThursday  : ~ \t7 \t14 \t21 \t28,\nFriday    : 1 \t8 \t15 \t22 \t29,\nSaturday  : 2 \t9 \t16 \t23 \t30,");
    }
    else if (month == 10)
    {
        printf("October");
        printf("\ndays = 31");
        printf("\nSunday    : 1 \t8 \t15 \t22 \t29,\nMonday    : 2 \t9 \t16 \t23 \t30,\nTuesday   : 3 \t10 \t17 \t24 \t31,\nWednesday : 4 \t11 \t18 \t25,\nThursday  : 5 \t12 \t19 \t26,\nFriday    : 6 \t13 \t20 \t27,\nSaturday  : 7 \t14 \t21 \t28,");
    }
    else if (month == 11)
    {
        printf("November");
        printf("\ndays = 30");
        printf("\nSunday    : ~ \t5 \t12 \t19 \t26,\nMonday    : ~ \t6 \t13 \t20 \t27,\nTuesday   : ~ \t7 \t14 \t21 \t28,\nWednesday : 1 \t8 \t15 \t22 \t29,\nThursday  : 2 \t9 \t16 \t23 \t30,\nFriday    : 3 \t10 \t17 \t24,\nSaturday  : 4 \t11 \t18 \t25,");
    }
    else if (month == 12)
    {
        printf("December");
        printf("\ndays = 31");
        printf("\nSunday    : ~ \t3 \t10 \t17 \t24 \t31,\nMonday    : ~ \t4 \t11 \t18 \t25,\nTuesday   : ~ \t5 \t12 \t19 \t26,\nWednesday : ~ \t6 \t13 \t20 \t27,\nThursday  : ~ \t7 \t14 \t21 \t28,\nFriday    : 1 \t8 \t15 \t22 \t29,\nSaturday  : 2 \t9 \t16 \t23 \t30,");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    printf("\nGood By...");
}