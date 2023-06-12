#include <stdlib.h>
#include "main.h"

/**
 * creat_array - creat an array of size char c
 * @size: size of the array
 * %c: char for initialization
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (int i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
