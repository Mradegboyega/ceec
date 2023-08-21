#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char game[30]; // Change to a single character array
    printf("Enter a string: ");
    scanf("%s", game);

    if (game == NULL)
    {
        return 1;
    }

    char *comps = malloc(strlen(game) + 1);
    if (comps == NULL) // Use == for comparison, not =
    {
        return 1;
    }

    strcpy(comps, game); // Corrected order of arguments

    if (strlen(comps) > 0)
    {
        comps[0] = toupper(comps[0]); // Use comps[0] instead of t[0]
    }

    printf("game: %s\n", game);
    printf("comps: %s\n", comps);

    free(comps); // Correct variable name

    return 0;
}
