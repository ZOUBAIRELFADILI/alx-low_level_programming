#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: pointer to the string to duplicate
 *
 * Return: pointeur to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; lenn++)
		;
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		new_str[i] = str[i];
	return (new_str);
}

