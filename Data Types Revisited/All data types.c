#include <stdio.h>
int main()
{
    char c;
    unsigned char d;
    int i;
    unsigned int j;
    long int k;
    unsigned long int m;
    float x;
    double y;
    long double z;

    scanf("%c %c", &c, &d);
    printf("%c %c", c, d);

    scanf("%d %u", &i, &j);
    printf("%d %u", i, j);

    scanf("%ld %lu", &k, &m);
    printf("%ld %lu", k, m);

    scanf("%f %lf %Lf", &x, &y, &z);
    printf("%f %lf %Lf", x, y, z);
}
