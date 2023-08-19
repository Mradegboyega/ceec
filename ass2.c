#include <stdio.h>

void sort_numbers(int *num1, int *num2, int *num3);

int main() {
    int num1, num2, num3;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    sort_numbers(&num1, &num2, &num3);
    
    // Write the sorted numbers
    printf("Numbers in sorted order: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

void sort_numbers(int *num1, int *num2, int *num3) {
    int temp;
    if (*num1 > *num2) {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if (*num2 > *num3) {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
    if (*num1 > *num2) {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
