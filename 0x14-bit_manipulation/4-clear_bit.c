#include "main.h"

/**
 * clear_bit - set the value of  given bit to 0
 * @n: pointer to  number to change
 * @index: index of the bit to clear
 *
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *k, unsigned int index)
{
	if (index > 63)
		return (-1);

	*k = (~(1UL << index) & *k);
	return (1);
}
