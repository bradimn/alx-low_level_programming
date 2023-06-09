#include "main.h"

/**
 * get_bit - return the value of  bit at an index in a decimal number
 * @n: number for search
 * @index: index of  bit
 *
 * Return: value of  bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitval;

	if (index > 63)
		return (-1);

	bitval = (n >> index) & 1;

	return (bitval);
}