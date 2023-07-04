#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returning the nth node of  linked list
 *
 * @head: pointer pointing to the first elements
 *
 * @index: index of the nth node
 *
 * Return: return nth node of  linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont;
	listint_t *current = head;

	for (cont = 0; current != NULL; cont++)
	{
		if (cont == index)
		{
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}
