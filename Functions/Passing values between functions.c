#include <stdio.h>
/*Sending and receiving values between functions*/
int main()
{
    int a, b, c, sum;

    printf("\nEnter any three numbers");
    scanf("%d %d %d", &a, &b, &c);

    sum = calsum (a, b, c);

    printf("\nSum = %d", sum);
}

calsum(x, y, z)
int x, y, z;
{
    int d;

    d = x + y + z;
    return d;
}
