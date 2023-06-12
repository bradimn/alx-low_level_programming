#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one for concatnation
 * @s2: input two to concatnation
 * Return: concated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *s3 = malloc(sizeof(char) * (len1 + len2 - 1));
	int i, j;

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
