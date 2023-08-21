#include <stdio.h>

void draw(int n);

int main(void)
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    draw(n - 1);

    return 0;
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    printf("\n");
}
