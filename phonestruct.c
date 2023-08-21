#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[30];
    char number[30];
} person;

int main(void)
{
    person people[2] = {
        {"Oba", "+23487587578"},
        {"Ade", "+23473844848874"}
    };

    char name[30];
    printf("Enter the name: ");
    scanf("%s", name);

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
