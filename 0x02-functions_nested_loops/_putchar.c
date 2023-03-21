#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character print 
 *
 * return: success 1.
 * on error, -1 is returnd, and errno is set appropriately..
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
