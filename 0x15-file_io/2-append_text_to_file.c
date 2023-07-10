#include "main.h"

/***
 * append_text_to_file - appending the text at the end of the file.
 *
 * @filename: pointer pointing to the name  of the file.
 * @text_content: the NULL terminated string to add at  end
 * of the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, char_apended, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		char_apended = write(f, text_content, len);
		if (char_apended != len)
		{
			return (-1);
		}

	}
	close(f);
	return (1);
}
