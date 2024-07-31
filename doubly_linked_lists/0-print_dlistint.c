#include "lists.h"

/*
 *
 *
 *
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t index;
	
	for (index = 0; h; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
