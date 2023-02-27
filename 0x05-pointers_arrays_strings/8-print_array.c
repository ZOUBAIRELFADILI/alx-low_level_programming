#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: the array to print
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	if (a == 0)
		return;

	for (i = 0; i < n; i++)
	{
		putchar("%d", *(a + i));
		if(i != n - 1)
			putchar(", ");
	}

	putchar("\n");
}
