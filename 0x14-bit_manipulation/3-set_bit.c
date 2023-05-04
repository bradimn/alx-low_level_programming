#include "main.h"

/**
 * set_bit - set a bit at  given index to 1
 * @n: pointer to  number to change
 * @index: index of  bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *k, unsigned int index)
{
	if (index > 63)
		return (-1);

	*k = ((1UL << index) | *k);
	return (1);
}
