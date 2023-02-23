// Write a programe to create a area calc using calc
// Rectangle area = length * width
// Triangle  area = a + b + c / 2          a = b = c = Edge
// Trapezoid area = (a + b / 2) * h        a = b = Base, h = Height;
// Circle area = pi * (r * r)              r = Radius
// Sector area = (a / 360) * pi * r * r    a = Angle, r = Radius
// Ellipse area = pi * a * b
// Parallelogram area = b × h              b = Base, h = Height
#include <stdio.h>
float get_rectangle()
{
    float area, length, wigth;
    printf("\n Enter value of length : ");
    scanf("%f", &length);
    printf(" Enter value of width : ");
    scanf("%f", &wigth);
    area = (length * wigth);
    printf(" The value of Rectangle area : %.2f", area);
    return area;
}
float get_triangle(float a, float b, float c)
{
    float area;
    area = (a + b + c) / 2;
    return area;
}
void main()
{
    int option = 0;
    float a, b, c;

    printf("\nEnter 1 for Rectangle area");
    printf("\nEnter 2 for Triangle area");
    printf("\nEnter 3 for Trapezoid area");
    printf("\nEnter 4 for Circle area");
    printf("\nEnter 5 for Sector area");
    printf("\nEnter 6 for Ellipse area");
    printf("\nEnter 7 for Parallelogram area ");
    printf("\nSelect any one option : ");
    scanf("%d", &option);

    if (option == 1)
    {
        printf("\nEnter 1 Rectangle area");
        get_rectangle();
    }
    //  printf(" The value of Triangle area : %.2f", area);
    // }else if (option == 2)
    // {
    //     printf("\nEnter 2 Triangle  area");
    //     printf("\n Enter value of A : ");
    //     scanf("%f", &a);
    //     printf(" Enter value of B : ");
    //     scanf("%f", &b);
    //     printf(" Enter value of C : ");
    //     scanf("%f", &c);
    //     area = get_triangle(a, b, c);
    //    
    // else if (option == 3)
    // {
    //     printf("\nEnter 2 Trapezoid area");
    //     printf("\n Enter value of A : ");
    //     scanf("%f", &a);
    //     printf(" Enter value of B : ");
    //     scanf("%f", &b);
    //     printf(" Enter value of C : ");
    //     scanf("%f", &c);
    //     area = get_triangle(a, b, c);
    //     printf(" The value of Trapezoid area : %.2f", area);
    // }
    else
    {
        printf("Invalid option");
    }
}