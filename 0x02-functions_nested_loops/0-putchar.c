#include "main.h"

/**
 * A program that prints out _putchar
 * main - Entry point
 * Return - Always 0
 */

int main(void)
{
	char c[5] = "hello";
	int i;
	for  (i = 0; i <5; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);


}
