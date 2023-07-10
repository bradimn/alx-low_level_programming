#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int fd);

/***
 * create_buffer - Allocates 1024 bytes for creating a buffer.
 * @file: The name of the file buffer is storing charactters .
 *
 * Return: A pointer pointing to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/***
 * close_file - Closing file descriptors.
 * @fd: The file descriptor for closing.
 */
void close_file(int fd)
{
	int s;

	s = close(fd);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/***
 * main - Coping the contents of a file to a different file.
 * @argc: The supplied arguments number
 * @argv: An array of pointers pointing to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fro, TO, R, W;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	fro = open(argv[1], O_RDONLY);
	R = read(fro, buff, 1024);
	TO = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
			if (fro == -1 || R == -1)
			{
				dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
				free (buff);
				exit(98);
			}
			W = write(TO, buff, R);
			if (TO == -1 || W == -1)
			{
				dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
				free (buff);
				exit(99);
			}
			R = read(fro, buff, 1024);
			TO = open(argv[2], O_WRONLY | O_APPEND);
	} while (R > 0);
	free (buff);
	close_file(fro);
	close_file(TO);

	return (0);
}




