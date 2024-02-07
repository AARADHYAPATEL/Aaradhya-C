#include <stdio.h>
main()
{
    float dist;
    float cm, inch, f, m;
    
    printf("Enter a number");
    scanf("%f", &dist);

    cm = dist * 100000;
    inch = dist * 39370.1;
    f = dist * 3280.84;
    m = dist * 1000;

    printf("The answer is %f, %f, %f, %f", cm, inch, f, m);
}