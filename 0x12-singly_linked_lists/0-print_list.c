#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * * print_list - printing all  elements of  linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	const list_t *t = h;
	int el_count = 0;

	while (t != NULL)
	{
		if (t->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", t->len, t->str);
		}
		el_count++;
		t = t->next;
	}
	return (el_count);
}

