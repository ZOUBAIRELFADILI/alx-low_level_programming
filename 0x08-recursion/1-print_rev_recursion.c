#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return;

	/* recursive case */
	_print_rev_recursion(s + 1);
	putchar(*s);
}

