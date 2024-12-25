#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nResults of all operations:\n");
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    if (num2 != 0) {
        printf("Division: %.2f\n", (float)num1 / num2);
    } else {
        printf("Division: Error (division by zero is not allowed)\n");
    }

    return 0;
}
