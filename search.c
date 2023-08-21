#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *strings[] = {"starboy", "davido", "burna", "olamide", "jazzy", "dbanj", "redhat"};
    int numStrings = sizeof(strings) / sizeof(strings[0]); // Calculate the number of strings in the array

    char input[20];
    printf("Enter a string: ");
    scanf("%s", input);

    for (int i = 0; i < numStrings; i++)
    {
        if (strcmp(strings[i], input) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
