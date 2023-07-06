#include "main.h"

/**
 * get_bit - returning the value of a bit at the index in a decimal number
 * @n: number for searching for
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
