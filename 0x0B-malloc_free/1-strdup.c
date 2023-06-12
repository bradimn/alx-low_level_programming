#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - creat a pointer to duplicate array
 * @str: array for duplication
 *
 * Return: if memory is not enough return NULL if enough return pointer
 */
char *_strdup(char *str)
{
	char *arr;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	arr = malloc((sizeof(char) * len) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
