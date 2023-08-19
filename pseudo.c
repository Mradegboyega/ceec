#include <stdio.h>

int main() {
  int number_of_elements, i, element, sum_of_squares = 0;

  // Get the number of elements from the user.
  do {
    printf("Enter the number of elements (greater than 1): ");
    scanf("%d", &number_of_elements);
  } while (number_of_elements <= 1);

  // Get the elements from the user.
  for (i = 0; i < number_of_elements; i++) {
    printf("Enter element number %d: ", i + 1);
    scanf("%d", &element);

    // Calculate the square of the element.
    sum_of_squares += element * element;
  }

  // Print the sum of squares.
  printf("The sum of squares is: %d\n", sum_of_squares);

  return 0;
}