#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change.
  * @argc: count argemunts.
  * @argv: array of argemunts.
  * Return: return 1 for error, else return 0.
  */
int main(int argc, char *argv[])
{
	int chang, n;

	change = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (nu > 0)
		{
			for (; n >= 25; chang++)
			{
				n = n - 25;
			}
			for (; n >= 10; chang++)
			{
				n = n - 10;
			}
			for (; n >= 5; chang++)
			{
				n = n - 5;
			}
			for (; n >= 2; chang++)
			{
				n = n - 2;
			}
			for (; n >= 1; chang++)
			{
				n = n - 1;
			}
		}
		printf("%d\n", chang);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
