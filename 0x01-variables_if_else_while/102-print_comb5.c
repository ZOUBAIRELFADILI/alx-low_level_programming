#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k, l;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            for (k = i; k <= 9; k++)
            {
                int start = (k == i) ? j : 0;
                for (l = start; l <= 9; l++)
                {
                    putchar((i % 10) + '0');
                    putchar((j % 10) + '0');
                    putchar(' ');
                    putchar((k % 10) + '0');
                    putchar((l % 10) + '0');
                    if (i != 9 || j != 8 || k != 9 || l != 9)
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
