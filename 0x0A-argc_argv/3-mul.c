#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints  name, followed by new.
  * @argc: arguments counter.
  * @argv: argument vector.
  * Return: 0,  error return 1.
  */
int main(int argc, char *argv[])
{
	int j, mul = 1;

	if (argc > 1 && (argc - 1) == 2)
	{
		for (j = 1; j < argc; j++)
		{
			mul *= atoi(argv[j]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
