#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one num to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits for change
 */
unsigned int flip_bits(unsigned long int k, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = k ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
