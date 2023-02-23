#include <stdio.h>

void main()
{
    int Burger, FrenchFries, Pizza, Sandwiches;
    int b, f, p, s, a, foob;

    printf("1 Burger\n2 French Fries\n3 Pizza\n4 Sandwiches");
    printf("\nEnter Your Choice Foob : ");
    scanf("%d", &foob);

    switch (foob)
    {
    case 1:
        printf("\nYour Order Is Burger :\n1 Veg Sancker - 100 \n2 Chotu Singh - 110 \n3 Junior Udta Punjab - 130");
        printf("\nEnter Your Choice Burger :");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nYour Order Is Burger Veg Sancker ");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &b);
            Burger = 90 * b + 10;
            printf("Your Totle Charges is :%d", Burger);
            break;
        case 2:
            printf("\nYour Order Is Burger Chotu singh ");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &b);
            Burger = 110 * b + 10;
            printf("Your Totle Charges is :%d", Burger);
            break;
        case 3:
            printf("\nYour Order Is Burger Junior Udta Punjab ");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &b);
            Burger = 130 * b + 10;
            printf("Your Totle Charges is :%d", Burger);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        break;
    case 2:
        printf("\nYour Order Is French Fries :\n1 6-Fries(Large) - 120 \n2 Hot Shok Fries(Large) - 140 \n3 Moroccan Fries(Large) - 150");
        printf("\nEnter Your Choice French Fries :");
        scanf("%d", &f);
        switch (f)
        {
        case 1:
            printf("\nYour Order Is French Fries 6-Fries(Large)");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &f);
            FrenchFries = 120 * f + 10;
            printf("Your Totle Charges is :%d", FrenchFries);
            break;
        case 2:
            printf("\nYour Order Is French Fries Hot Shok Fries(Large)");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &f);
            FrenchFries = 140 * f + 10;
            printf("Your Totle Charges is :%d", FrenchFries);
            break;
        case 3:
            printf("\nYour Order Is French Fries Moroccan Fries (Large)");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &f);
            FrenchFries = 150 * f + 10;
            printf("Your Totle Charges is :%d", FrenchFries);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        break;
    case 3:
        printf("\nYour Order Is Pizza :\n1 Margherita Pizza - 200\n2 Farmhouse Pizza - 350\n3 Panner & Onion Pizza - 350");
        printf("\nEnter Your Choice Pizza :");
        scanf("%d", &p);
        switch (p)
        {
        case 1:
            printf("\nYour Order Is Margherita Pizza");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &p);
            Pizza = 200 * p + 10;
            printf("Your Totle Charges is :%d", Pizza);
            break;
        case 2:
            printf("\nYour Order Is Farmhouse Pizza");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &p);
            Pizza = 350 * p + 10;
            printf("Your Totle Charges is :%d", Pizza);
            break;
        case 3:
            printf("\nYour Order Is Panner & Onion Pizza");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &p);
            Pizza = 350 * p + 10;
            printf("Your Totle Charges is :%d", Pizza);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        break;
    case 4:
        printf("\nYour Order Is Sandwiches :\n1 Vegetabel Sandwiches - 130 \n2 Veg Grilled Sandwiches - 150 \n3 Cheese Italian Sandwiches - 180");
        printf("\nEnter Your Choice Sandwiches :");
        scanf("%d", &s);
        switch (s)
        {
        case 1:
            printf("\nYour Order Is Vegetabel Sandwiches");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &s);
            Sandwiches = 130 * s + 10;
            printf("Your Totle Charges is :%d", Sandwiches);
            break;
        case 2:
            printf("\nYour Order Is Veg Grilled Sandwiches");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &s);
            Sandwiches = 150 * s + 10;
            printf("Your Totle Charges is :%d", Sandwiches);
            break;
        case 3:
            printf("\nYour Order Is Cheese Italian Sandwiches");
            printf("\nPlease Enter Your Quantity :");
            scanf("%d", &s);
            Sandwiches = 180 * s + 10;
            printf("Your Totle Charges is :%d", Sandwiches);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
        break;
    
    default:
        printf("Invalid Your Choice");
        break;
    }
    printf("\nThank You");
}