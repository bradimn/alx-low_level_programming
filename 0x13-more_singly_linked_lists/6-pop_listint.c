#include "lists.h"

/**
 * pop_listint - deleting  head node of linked list
 * @head: pointer pointing to the first element in a linked list
 *
 * Return: the data inside  elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *pass;
	int data;

	if (!head || !*head)
	{
		return (0);
	}
	data = (*head)->n;
	pass = (*head)->next;
	free(*head);
	*head = pass;
	return (data);
}
