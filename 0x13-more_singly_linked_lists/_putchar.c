#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 * Return:  on success 1
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
