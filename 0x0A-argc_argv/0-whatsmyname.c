#include <stdio.h>
#include <main.h>

/**
 * main - print the name of all programs
 * @argc: argument number
 * @argv: array of all arguments
 *
 * return: 0
 */

int main(int argc __attribute__((unused)), char *argv[]){
	(void)argc:
		printf("%s\n", argv[0]);
	return (0);
}
