#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string to print
 */
void puts2(char *str)
{
	int i;
	int len=0;

	if (str == 0)
		return;

	while (*(str + len))
		len++;

	for (i = 0; i < len; i += 2)
		printf(*(str + i));

	putchar('\n');
}
