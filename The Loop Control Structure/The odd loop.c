#include <stdio.h>

int main() {
    char another = 'y';
    int num;

    while (another == 'y' || another == 'Y') {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Square of %d is %d\n", num, num * num);
        
        // Clear the input buffer to consume the newline character
        while ((getchar()) != '\n');

        printf("Want to enter another number (y/n)? ");
        scanf(" %c", &another);
    }

    return 0;
}
