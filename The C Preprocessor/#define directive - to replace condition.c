#include <stdio.h>

#define AND &&
#define ARANGE(a) ((a) > 25 && (a) < 50) // Corrected macro definition

int main() {
    int a = 30;

    if (ARANGE(a)) // Corrected usage of the ARANGE macro
        printf("Within range\n");
    else
        printf("Out of range\n");

    return 0;
}
