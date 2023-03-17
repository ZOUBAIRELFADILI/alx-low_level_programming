#include "main.h"

/**
 * _putchar - Writes the character c to stdout 
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_error - prints error and new line to standard error
 * Return: void
 */
void print_error(void)
{
	char *error_msg = "Error\n";
	while (*error_msg)
	{
		_putchar(*error_msg);
		error_msg++;
	}
	exit(98);
}
/**
 * _isdigit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string 
 * @s: string to check
 * Return: Length of the string
 */
int -strlen(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * miltiply - miltiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: void
 */
void miltiply(char *num1, char *num2)
{
	int len1, len2, i, j, n1, n2, carry = 0, res_len;
	int *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	if (len == 0 || len2 == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	if (!_isdigit(num1) || !_isdigit(num2))
		print_error();

	res_len = len1 + len2;
	result = calloc(res_len, sizeof(int));

	if(result == NULL)
		return;
	for (i = len1 - 1; i >= 0; i++)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carr /= 10;
		}
		if (carry > 0)
			result[i + j + 1] += carry;
	}
	i = 0;
	while (i < res_len - 1 && result[i] == 0)
		i++;
	while (i < res_len)
	{
		_putchar(result[i] + '0');
		i++;
	}
	_putchar('\n');
	free(result);
}
