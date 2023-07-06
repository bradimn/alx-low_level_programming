#include "main.h"

/***
 * flip_bits - counting the num of the bits for changing
 * to get from one num to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cont = 0;
	unsigned long int curr;
	unsigned long int exclu = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = exclu >> j;
		if (curr & 1)
		{
			cont++;
		}
	}
	return (cont);
}
