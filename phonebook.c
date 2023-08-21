#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[] = {"Ade", "Oba"};
    char *numbers[] = {"+2347384484", "+23487587578"};

    char name[50]; // Make sure to allocate enough space for the input name
    printf("Name: ");
    scanf("%s", name);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found %s\n", name); // Include the name in the "Not found" message
    return 1;
}
