#include <stdio.h>
int main()
{
    int num[] = {12, 24, 36, 48, 60, 72};
    int i;

    for (i = 0; i <= 5; i++)
    {
        printf("\nelement no. %d", i);
        printf("address = %u", &num[i]);
    }
}
