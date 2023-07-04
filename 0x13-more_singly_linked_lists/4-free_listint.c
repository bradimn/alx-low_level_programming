#include "lists.h"

/**
 * free_listint - freeing a listint_t list
 *
 * @head: pointer to  head
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *pass;

	while (head)
	{
		pass = head->next;
		free (head);
		head = pass;
	}
}
