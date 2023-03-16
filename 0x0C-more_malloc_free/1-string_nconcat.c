#include "main.h"
/**
 * string_nconcat - Concatentes two strings
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes of s2 to concatebate
 *
 * Return: Pointer to the newly allocateed space in memory
 */
char *string_nconcat(char *s1, char *s2, signed int n)
{
	char *str;
	signed int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * (len2 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
