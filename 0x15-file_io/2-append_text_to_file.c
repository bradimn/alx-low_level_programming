#include "main.h"

/**
 * append_text_to_file - Append text in the end of  file.
 * @filename:  pointer to  name of the file.
 * @text_content:  string to add to the end of the file.
 *
 * Return: If the function fail or filenam is NULL  -1.
 *         If the file does not exist the user lack write permission -1.
 *         Otherwise  1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d, l, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_WRONLY | O_APPEND);
	l = write(d, text_content, len);

	if (d == -1 || l == -1)
		return (-1);

	close(d);

	return (1);
}
