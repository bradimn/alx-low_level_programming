#include "main.h"

/**
 * _isalpha - cheks for alphabetic character
 * @c: the character must be checked
 * Return: 1 if alphabetic character else 0
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
