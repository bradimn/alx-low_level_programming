#include "main.h"

/**
 * binary_to_uint - converting binary num to unsigned int
 *
 * @b: pointer pointing to a string of 0 and 1 characters
 * Return: converted nu, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int de_val = 0;

	if (!b)
	{
		return (0);
	}
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		de_val = 2 * de_val + (b[j] - '0');
	}
	return (de_val);
}
