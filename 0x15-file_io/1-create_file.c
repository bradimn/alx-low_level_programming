#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to  name of the file to create.
 * @text_content:  pointer to  string so write to the file.
 *
 * Return: If the function fail -1.
 *         Otherwis  1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, l, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	l = write(fd, text_content, len);

	if (fd == -1 || l == -1)
		return (-1);

	close(fd);

	return (1);
}
