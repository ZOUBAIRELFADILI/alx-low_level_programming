#include "main.h"
/**
 * print_binary - printd the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binaty(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(unsigned long int) * 8;
	int flag = 0;

	mask <<= size - 1;
	while (mask)
	{
		if ((n & mask) == mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1 || size == 1)
			_putchar('0');
		mask >>= 1;
		size--;
	}
}
