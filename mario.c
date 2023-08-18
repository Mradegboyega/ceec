#include <stdio.h>

int main(void)
{   
    // getting size of grid
    int n; //initializing a n
    do 
    {
        printf("Enter a number: ");
        scanf("%d", &n);

    }
    while (n < 2); // do while to enforce the user respond with value greater than 1


    //print grid of bricks from the response gotten from the user.
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
    
}