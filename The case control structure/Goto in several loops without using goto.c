#include <stdio.h>

int main() {
    int i, j, k;
    int loopFinished = 0; // Flag to indicate when to exit the loop

    for (i = 1; i <= 3 && !loopFinished; i++) {
        for (j = 1; j <= 3 && !loopFinished; j++) {
            for (k = 1; k <= 3 && !loopFinished; k++) {
                if (i == 3 && j == 3 && k == 3) {
                    loopFinished = 1; // Set flag to exit loop
                } else {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }

    printf("Out of the loop at last\n");
    return 0;
}
