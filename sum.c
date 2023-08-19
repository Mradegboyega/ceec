#include <stdio.h>
#include <stdbool.h> // For using bool data type

int main() {
    int sum = 0;
    int number;
    bool exitFlag = false;

    do {
        printf("Enter a number (or a negative number to exit): ");
        scanf("%d", &number);

        if (number < 0) {
            exitFlag = true;
        } else {
            sum += number;
        }
    } while (!exitFlag);

    printf("Sum: %d\n", sum);

    return 0;
}
