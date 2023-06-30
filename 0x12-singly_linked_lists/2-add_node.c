#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add  new node at start of  linked list
 * @head: double pointer to  list_t list
 * @str: new string to add in  node
 *
 * Return: the address of  new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len])
		len++;
	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	return (*head);
}
