#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reversing  linked list
 * @head: pointer pointing to the first node in the list
 *
 * Return: pointer pointing to  first node in  new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	(*head) = next;
	return (*head);
}
