#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to modify
 *
 * Return: A pointer to the modified string
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	
	for (i = 1; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
				break;
			default:
				break;
		}
	}

	return (str);
}
