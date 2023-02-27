#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to print
 */
void puts_half(char *str)
{
	if (str == NULL)
		return;

	int len = 0;
	while (*(str + len))
		len++;
	int n = (len + 1) / 2;
	for (int i = n; i < len; i++)
		putchar(*(str + 1));

	putchar('\n');
}
