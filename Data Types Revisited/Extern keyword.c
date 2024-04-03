#include <stdio.h>
int x = 21;
int main()
{
    extern int x;
    printf("\n%d", x);
}
