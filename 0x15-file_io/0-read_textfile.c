#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number  letters to be read
 * Return: l- actual number of bytes read and printed
 *        0 when function fail or filenam is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t l;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fd, buf, letters);
	l = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fd);
	return (l);
}
