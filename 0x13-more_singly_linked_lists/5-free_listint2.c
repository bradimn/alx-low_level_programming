#include "lists.h"

/**
 * free_listint2 - freeing a linked list
 *
 * @head: pointer pointing to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *pass;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		pass = (*head)->next;
		free(*head);
		*head = pass;
	}
	*head = NULL;
}
