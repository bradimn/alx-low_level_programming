#include "lists.h"

/**
 * add_nodeint - adding a newly created node at beginning of  linked list
 * @head: pointer to pointer to head
 *
 * @n: data to be add
 *
 * Return: address of  new elements, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc (sizeof(listint_t));

	if (!add)
	{
		return (NULL);
	}
	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
