#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
	int result = 1;

	if (n < 0)
		return -1;
	if (n == 0)
		return 1;
	while (n > 0)
	{
		result *= n;
		n--;
	}

	return (result);
}
