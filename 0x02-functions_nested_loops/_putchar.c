#include <unistd.h>
/**
 * _putchar - write the char c to stdout
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
