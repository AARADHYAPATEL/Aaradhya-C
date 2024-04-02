#include <stdio.h>

// Function prototype declaration
float square(float);

int main() {
    float a, b;

    printf("\nEnter any number: ");
    scanf("%f", &a);

    // Call to the square function
    b = square(a);
    printf("\nSquare of %f is %f", a, b);

    return 0;
}

// Function definition for calculating the square
float square(float x) {
    float y;

    y = x * x;
    return y;
}
