#include <stdio.h>
main()
{
    int gty, dis = 0;
    float rate, tot;

    printf("Enter Quantity and rate");
    scanf("%d %f", &gty, &rate);

    if (gty > 1000)
        dis = 10;

    tot = (gty * rate) - (gty * rate * dis / 100);
    printf("Total expenses = Rs. %f", tot);
}