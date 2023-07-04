#include "lists.h"


/**
 * delete_nodeint_at_index - deleting a node in linked list at certain index
 * @head: pointer pointing to the first element in the list
 * @index: index of the node to be  deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pass = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(pass);
		return (1);
	}
	while (j < index - 1)
	{
		if (!pass || !(pass->next))
			return (-1);
		pass = pass->next;
		j++;
	}
	current = pass->next;
	pass->next = current->next;
	free (current);
	return (1);
}
