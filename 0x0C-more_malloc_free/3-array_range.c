#include <stdlib.h>
#include "main.h"

/**
 **array_range - creates an array of integers
 * @min: minimum value to be stored
 * @max: maximun value to be stored
 *
 * Return pointer to an array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
