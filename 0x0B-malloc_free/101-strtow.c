#include <stdlib.h>
#include <string.h>
#include "main.h"

#define DELIMITER ' '

/**
 * word_count - Counts the number of words in a string.
 *
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == DELIMITER)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words)..or NULL...
 */

char **strtow(char *str)
{
	char **words;
	int num_words, i = 0;
	char *word_start, *word_end;
	
	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	
		words = malloc((num_words + 1) * sizeof(char *));
		if (words == NULL)
			return (NULL);
		while (*str)
		{
			if (*str == DELIMITER)
			{
				str++;

				continue;
			}
			word_start = str;
			while (*str && *str != DELIMITER)
				str++;
			word_end = str - 1;
			words[i] = malloc((word_end - word_start + 2) * sizeof(char));
			if (words[i] == NULL)
			{
				while (--i >= 0)
					free(words[i]);
				free(words);
				return (NULL);
			}
			strncpy(words[i], word_start, word_end - word_start + 1);
			words[i][word_end - word_start + 1] = '\0';
		}
		word[i] = NULL;
		return (words);
}
