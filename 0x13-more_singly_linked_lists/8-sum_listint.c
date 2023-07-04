#include "lists.h"

/**
 * sum_listint - calculating the sum of all the data in a listint_t list
 * @head: first node in  linked list
 *
 * Return: result sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pass = head;

	while (pass)
	{
		sum += pass->n;
		pass = pass->next;
	}
	return (sum);
}
