#include "main.h"

/***
 * create_file - creating a file.
 *
 * @filename: name of the file to be created
 * @text_content: NULL terminated string for writing to a file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, W, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		length++;
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(f, text_content, length);

	if (f == -1 || W == -1)
	{
		return (-1);
	}
	close(f);
	return (1);
}
