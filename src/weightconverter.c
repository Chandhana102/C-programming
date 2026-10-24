#include <stdio.h>

int main() {
    float weight, convertedWeight;
    int choice;

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Select conversion:\n1. Kilograms to Pounds\n2. Pounds to Kilograms\n");
    scanf("%d", &choice);

    if (choice == 1) {
        convertedWeight = weight * 2.20462;
        printf("Weight in Pounds: %.2f\n", convertedWeight);
    } else if (choice == 2) {
        convertedWeight = weight / 2.20462;
        printf("Weight in Kilograms: %.2f\n", convertedWeight);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
