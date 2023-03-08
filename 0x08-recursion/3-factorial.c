#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number
 *
 * factorial_helper - recursive helper function for factorial
 * 
 * @n: the number to calculate the factorial of
 * @acc: the accumulator value for the calculation
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial_helper(int n, int acc)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (acc);
	return (factorial_helper(n - 1, n * acc));
}

/**
 * factorial_helper - recursive helper function for factorial
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
	return (factorial_helper(n, 1));
}
