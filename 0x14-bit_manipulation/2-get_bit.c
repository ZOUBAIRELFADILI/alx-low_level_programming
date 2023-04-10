#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get the bit from
 * @index: index, starting from 0, of the bit to get
 *
 * Return: value of the bit at index o -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
