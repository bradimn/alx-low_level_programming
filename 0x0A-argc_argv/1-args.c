#include <stdio>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc argemunts number
 * @argv arguments 
 *
 * Return 0
 */

int main(int argc, char *argv[]) {

	printf("%d\n", argc - 1);
	return 0;
}

