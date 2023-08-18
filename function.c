#include <stdio.h>

int add_two_ints(int a, int b);

int main() 
{
    int x, y;

    printf("Give me an integer: ");
    scanf("%d", &x);

    printf("Give me another integer: ");
    scanf("%d", &y);

    int z = add_two_ints(x, y);
    printf("The sum of %d and %d is %d!\n", x, y, z);
    return 0;
}

int add_two_ints(int a, int b) 
{
    return a + b;
}
