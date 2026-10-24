#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    int choice;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Select conversion:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    if (choice == 1) {
        fahrenheit = (celsius * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } else if (choice == 2) {
        celsius = (fahrenheit - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
