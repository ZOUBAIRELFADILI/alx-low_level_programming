#include "list.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head of the list
 *
 * return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		orintf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
