#include "main.h"
/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes 
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointeer to the allcated memory or NULL if function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	insigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return ((void *) ptr);
}
