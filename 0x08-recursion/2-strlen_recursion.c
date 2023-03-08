#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a syring
 * @s: string to find the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/ base case */
		if (*s == '\0')
			return (0);
	/* recursive cas */
	return (1 + _strlen_recursion(s + 1));
}
