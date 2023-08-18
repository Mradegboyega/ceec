#include <stdio.h>

int main() {
    int scores;

    printf("Enter the size of the array: ");
    scanf("%d", &scores);

    int arr[scores]; // Declare an array of size 'n'

    printf("Enter %d elements:\n", scores);
    for (int i = 0; i < scores; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read input for each element
    }

    printf("You entered the following elements:\n");
    for (int i = 0; i < scores; i++) {
        printf("%d ", arr[i]); // Print the elements
    }

    return 0;
}
