#include <stdio.h>

int main() {
    double kilometers, fuelAmount;

    // Ask user for kilometers
    do {
        printf("Enter the distance of the journey in kilometers: ");
        scanf("%lf", &kilometers);

        // Check if kilometers is less than or equal to 0
        if (kilometers <= 0) {
            printf("Invalid input. Distance must be greater than 0.\n");
        }
    } while (kilometers <= 0); // Repeat until a valid positive value is entered

    // Calculate fuel amount (100 times greater than kilometers)
    fuelAmount = kilometers * 100;

    // Ensure fuel amount is not less than 1500
    if (fuelAmount < 1500) {
        fuelAmount = 1500;
    }

    // Display the amount of fuel needed
    printf("Amount of fuel needed: %.2lf\n", fuelAmount);

    return 0;
}
