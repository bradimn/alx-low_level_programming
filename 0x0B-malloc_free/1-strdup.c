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

	while (str[len] != '\0')
	{
		len++;
	}
	if (len == 0)
	{
		return (NULL);
	}
	arr = malloc((sizeof(char) * len) + 1);
	for (int i = 0; i < len; j++)
	{
		arr[j] = str[j];
	}
	arr[len] = '\0';
	return (arr);
}
