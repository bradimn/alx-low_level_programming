#include "main.h"

/***
 * get_endianness - checking if the machine is small or big endian
 * Return: 0 for big, 1 for small
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *s = (char *) &j;

	return (*s);
}
