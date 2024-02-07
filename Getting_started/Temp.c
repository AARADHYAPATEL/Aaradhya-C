#include <stdio.h>

main()
{
    float c, f;
    printf("Enter the temperature");
    scanf("%f", &f);

    c = f * 33.8;
    printf("The temperature of today is %f", c);
}
