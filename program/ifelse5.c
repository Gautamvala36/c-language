// Write a programe to findout which triagnle is greater outof given 3 triangle
// area of triagnle = height * base / 2

#include <stdio.h>

void main()
{
    int height1, height2, height3, base1, base2, base3;
    float area1, area2, area3;

    printf("Enter value of height1 : ");
    scanf("%d", &height1);
    printf("Enter value of base1 : ");
    scanf("%d", &base1);
    printf("Enter value of height2 : ");
    scanf("%d", &height2);
    printf("Enter value of base2 : ");
    scanf("%d", &base2);
    printf("Enter value of height3 : ");
    scanf("%d", &height3);
    printf("Enter value of base3 : ");
    scanf("%d", &base3);

    area1 = height1 * base1 / 2;
    area2 = height2 * base2 / 2;
    area3 = height3 * base3 / 2;

    if (area1 == area2)
    {
        if (area2 == area3)
        {
            printf("All are same");
        }
    }
    else
    {
        if (area1 > area2)
        {
            if (area1 > area3)
            {
                printf("area1 is greater.");
            }
            else
            {
                printf("area3 is greater.");
            }
        }
        else
        {
            if (area2 > area1)
            {
                if (area2 > area3)
                {
                    printf("area2 is greater");
                }
                else
                {
                    printf("area3 is greater");
                }
            }
        }
    }
}