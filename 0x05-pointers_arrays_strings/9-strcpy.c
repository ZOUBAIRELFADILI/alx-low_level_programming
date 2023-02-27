#include "main.h"

/**
 * _strcpy - copies the syring pointed to by src, including the terminating null byte (\0),to the buffer pointed to by dest.
 *
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return NULL;

	char *ret = dest;
	while (*src) {
		*dest++ = *src++;
	}
	*dest = '\0';
	
	return ret;
}
