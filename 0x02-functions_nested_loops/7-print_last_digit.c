#include "main.h"

/**
 * print_last_digit - print the last digit
 * @i: the number to be treated
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;

	if (i < 0)
		k = -k;
	return (k);
}
