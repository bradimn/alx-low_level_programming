#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return num of elements in  linked list
 * @h: pointer for structure.
 *
 * Return: number of elements in a list_t list
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
	return (b);
}
