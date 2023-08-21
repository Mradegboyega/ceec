#include <stdio.h>

void swap(int *a, int *b, int *c);

int main(void) 
{
    int x = 5, y = 10, z = 15;

    printf("Before swapping: x = %d, y = %d, z = %d\n", x, y, z);

    swap(&x, &y, &z);

    printf("After swapping: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}

void swap(int *a, int *b, int *c) 
{
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}
