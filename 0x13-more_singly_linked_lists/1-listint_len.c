#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returning elements count in a linked lists
 *
 * @h: linked list of type listint_t for traversing
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
