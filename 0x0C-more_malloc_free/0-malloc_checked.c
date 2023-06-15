#include "main.h"

/**
 * *malloc_checked - allocated memory using malloc
 * @b: bytes number
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
