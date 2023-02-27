#include "main.h"
#include <stdio.h>
/**
 *puts2 - prints every character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
	int i;
	int len = 0;
	if (str == 0)
		return;

	while (*(str + len))
		len++;

	for (i = 0; i < len; i += 2)
		putchar(*(str + i));

	putchar('\n');
}
