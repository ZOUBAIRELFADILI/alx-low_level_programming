#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the syring pointed to by src.
 *
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ret = dest;

	if (dest == 0 || src == 0)
		return (0);

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (re)t;
}
