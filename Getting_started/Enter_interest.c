#include <stdio.h>
/*Calculation of simple interest*/
main()
{
    int p,n;
    float r,si;
    printf("Enter values of p,n,r");
    scanf("%d %d %f", &p, &n, &r);

    si = p*n*r / 100;
    printf("%f", si);
}