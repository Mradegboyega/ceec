#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 1;
    int b = 2;

    printf("a is %d, b is %d\n", a, b);
    swap(&a, &b);
    printf("a is %d, b is %d\n", a, b);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


