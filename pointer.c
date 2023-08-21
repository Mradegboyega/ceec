#include <stdio.h>


int main(void)
{
    char *greet = "Hello";
    printf("%p\n", greet);
    printf("%s\n", greet);
    printf("%p\n", greet + 1);
    printf("%p\n", greet + 2);
    printf("%p\n", greet + 3);
    printf("%p\n", greet + 4);

    return 0;
}