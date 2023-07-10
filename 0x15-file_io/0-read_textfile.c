#include "main.h"
#include <stdlib.h>

/***
 * read_textfile - reads a text file and prints it to the POSIX
 * STDOUT.
 *
 * @filename: name of the file bieng read.
 * @letters: number of letters it could read and print.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t f;
	ssize_t W;
	ssize_t T;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	bu = malloc(sizeof(char) * letters);
	T = read(f, bu, letters);
	W = write(STDOUT_FILENO, bu, T);

	free(bu);
	close(f);
	return (W);
}
