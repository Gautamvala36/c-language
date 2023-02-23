#include <stdio.h>

void main()
{
    long long int planet, distance;

    printf("Enter the value of Planet :\n1.Mercury - Venus 2.Mercury - Earth 3.Mercury - Mars 4.Mercury - Jupiter 5.Mercury - Saturn 6.Mercury - Uranus 7.Mercury - Neptune) (2 Venus) (3 Earth) (4 Mars) (5 Jupiter) (6 Saturn) (7 Uranus) (8 Neptune)");
    printf("\nEnter the value of Planet2 :(1 Mercury) (2 Venus) (3 Earth) (4 Mars) (5 Jupiter) (6 Saturn) (7 Uranus) (8 Neptune)");
    printf("\nEnter the Choice Planet :");
    scanf("%lld", &planet);

    switch (planet)
    {
    case 1:
        // distance = Mercury - Venus
        distance = (-57900000 + 108200000);
        printf("\nPlanet Distance is :%lld", distance);
        break;

    case 2:
        // distance = Mercury - Earth
        distance = (-57900000 + 149600000);
        printf("\nPlanet Distance is :%lld", distance);
        break;

    case 3:
        // distance = Mercury - Mars
        distance = (-57900000 + 227900000);
        printf("\nPlanet Distance is :%lld", distance);
        break;

    case 4:
        // distance = Mercury - Jupiter
        distance = (-57900000 + 778600000);
        printf("\nPlanet Distance is :%lld", distance);
        break;

    case 5:
        // distance = Mercury - Saturn
        distance = (-57900000 + 1433500000);
        printf("\nPlanet Distance is :%lld", distance);
        break;

    case 6:
        // distance = Mercury - Uranus
        distance = (-57900000 + 2872500000);
        printf("\nPlanet Distance is :%lld", distance);
        break;

    case 7:
        // distance = Mercury - Neptune
        distance = (-57900000 + 4495100000);
        printf("\nPlanet Distance is :%lld", distance);
        break;
        
    default:
        printf("Invalid case");
        break;
    }
    printf("\nGood By..");
}