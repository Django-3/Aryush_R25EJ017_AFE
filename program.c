#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic operations
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    if (b != 0) {
        printf("Division = %.2f\n", (float)a / b);
        printf("Modulus = %d\n", a % b);
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }

    return 0;
}