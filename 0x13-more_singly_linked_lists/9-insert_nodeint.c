#include "lists.h"

/**
 * insert_nodeint_at_index - inserting  new node in  linked list,
 * at a given position
 * @head: pointer pointing to  first node in the list
 * @idx: index where the new node isgoing ot be  added
 * @n: data to insert in new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *newnode;
	listint_t *pass = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);

	}
	for (j = 0; pass && j < idx; j++)
	{
		if (j == idx - 1)

		{
			newnode->next = pass->next;
			pass->next = newnode;
			return (newnode);
		}
		else
		{
			pass = pass->next;
		}
	}
	return (NULL);
}
