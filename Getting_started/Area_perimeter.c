#include <stdio.h>
main()
{
    float l, b, per, area;
    printf("Enter the lenght and breadth of the rectangle.");
    scanf("%f %f", &l, &b);

    per = 2 * l + b;
    area = l * b;

    printf("The area of a rectangle is %f ", area);
    printf("\nThe perimeter of a rectangle is %f", per);

}