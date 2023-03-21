#include "main.h"

/**
 * _islower - check for lower case characters
 * @c: the character must be chacked
 * Return: return 1 if lower case else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
