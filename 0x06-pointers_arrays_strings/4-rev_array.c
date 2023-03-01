#include "main.h"
/**
 * reverse_array - Reverses the cotent of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	/* Swap the first and last elements, the second and second to last*/
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
