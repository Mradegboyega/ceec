#include <stdio.h>

int main(void) {
    char input[100]; // Declare a character array to store user input

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Read a full line from the user
    
    printf("You entered: %s\n", input);
    
    return 0;
}
