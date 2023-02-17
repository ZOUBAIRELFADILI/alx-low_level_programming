#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int n = rand() % 201 - 100; // n will be a random number between -100 and 100, inclusive

    printf("%d ", n);

    if (n > 0)
    {
        printf("is positive\n");
    } else if (n == 0)
    {
        printf("is zero\n");
    } else
    {
        printf("is negative\n");
    }
    return (0);
}

