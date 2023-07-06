#include "main.h"

/***
 * clear_bit - seting the value of  bit to a 0 at speciffic index.
 *
 * @n: address of n.
 * @index: position
 * Return: 1 if it worked, -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
