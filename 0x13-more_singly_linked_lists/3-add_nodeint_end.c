#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds anewly created  node at the end of linked list
 * @head: pointer pointing  to the first element in a list
 * @n: data to insert in the new element
 *
 * Return: pointer to  new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pass, *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		pass = *head;
		while (pass->next != NULL)
		{
			pass = pass->next;
		}
		pass->next = new;
	}
	return (new);
}
