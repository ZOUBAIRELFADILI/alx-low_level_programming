#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to print
 */
void puts_half(char *str)
{
	int i;
	int len=0;
	int n;

	if (str == 0)
		return;

	while (*(str + len))
		len++;
	n = (len + 1) / 2;
	for (i = n; i < len; i++)
		puts_half(*(str + 1));

	putchar('\n');
}
