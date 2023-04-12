#include <unisted.h>


/**
 * _putchar - my finc to write character c to stdout
 *
 * Return: 1 on success
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
