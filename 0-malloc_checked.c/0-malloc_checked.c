#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to be allocated
 *
 * Return: Pointer to the allocated memory
 * Exit with status value of 98 if malloc fails
 */
void *malloc_checked(usigned int b)
{
	void *ptr = malloc(b);

	if (*ptr == NULL)
		exit(98);
	return (ptr);
}

