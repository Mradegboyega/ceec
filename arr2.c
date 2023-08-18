#include <stdio.h>

const int N = 3;

float average(int array[]);

int main(void) 
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("Enter a score: ");
        scanf("%d", &scores[i]); // You need to provide the index 'i'
    }

    printf("Average: %f\n", average(scores));

    return 0;
}

float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }
    return (float)sum / N;
}
