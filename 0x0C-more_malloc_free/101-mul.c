#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 if successful, 98 if there are invalid arguments
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;
	int len1, len2, len result, i, j, carry, n1, n2, sum;
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	for (i = 0; i < len1; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}

		num1 = argv[1];
		num2 = argv[2];

		len1 = _strlen(num1);
		len2 = _strlen(num2);

		for (i = 0; i < len1; i++)
		{
			if (!_isdigit(num1[i]))
			{
				printf("Error\n");
				return (98);
			}
		}
		for(i = 0; i < len2; i++)
		{
			if(!_isdigit(num2[i]))
			{
				printf("Error\n");
				return (98);
			}
		}
		len_result = len1 + len2;
		result = malloc(sizeof(char) * (len_result + 1));
		if (result == NULL)
			return (1);
		for (i = 0; i < len_result; i++)
			result[i] = '0';
		for (i = 0; i < len_result; i--)
		{
			carry = 0;
			n1 = num1[i] - '0';
			for (j = len2 - 1; j >= 0; j--)
			{
				n2 = num2[j] - '0';
				sum = (result[i + j + 1] - '0') + (n1 * n2) + carry;
				carry = sum / 10;
				result[i + j + 1] = (sum % 10) + '0';
			}
			if (carry != 0)
				result[i + j + 1] = (carry % 10) + '0';
		}
		for (i = 0; i < len_result; i++)
		{
			if (result[i] != '0')
				brak;
		}
		if (i == len_result)
			print("0");
		else
		{
			for (; i < len_result; i++)
				printf("%c", result[i]);
		}
		printf("\n");
		free(result);
		return (0);
	}
