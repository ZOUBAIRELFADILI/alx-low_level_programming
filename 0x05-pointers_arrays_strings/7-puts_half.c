#include <stdio.h>
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

	if (str == 0)
		return;

	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	while (*(str + i) != '\0') {
		putchar(*(str + i));
		i++;
	}

	putchar('\n');
}
