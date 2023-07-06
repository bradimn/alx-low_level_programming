#include "main.h"

/***
 * set_bit - seting a bit at a specific index to 1
 * @n: pointer pointing to  num to change
 * @index: index of  bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
