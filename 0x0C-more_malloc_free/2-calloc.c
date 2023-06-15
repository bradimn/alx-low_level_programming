#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array elemnts number
 * @size: bytes number
 *
 * Return: NULL if nmemb/size is 0 or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int p, j;
	char *l;
	char *c;

	if ((nmemb || size) == 0)
	{
		return (NULL);
	}
	p = nmemb * size;
	l = c = malloc(p);
	if (l == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < p; j++)
	{
		*l++ = 0;
	}
	return (c);
}
