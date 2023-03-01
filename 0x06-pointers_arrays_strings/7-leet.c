#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_diits[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_digits[j];
				break; /* Only one if statement allowed, so we break out of inner loop once we ve found a match*/
			}
		}
	}

	return (str);
}
