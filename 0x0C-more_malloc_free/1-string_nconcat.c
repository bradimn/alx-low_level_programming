#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: n number of bytesfrom s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int z = 0, i = 0, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n < len2)
	{
		p = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!p)
	{
		return (NULL);
	}

	for (z = 0; z < len1; z++)
	{
		p[z] = s1[z];
	}
	while (n < len2 && z < (len1 + n))
		p[z++] = s2[i++];

	while (n >= len2 && z < (len1 + len2))
		p[z++] = s2[i++];

	p[z] = '\0';

	return (p);
}
