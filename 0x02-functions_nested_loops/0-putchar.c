#include "main.h"

/**
 * Desc: A program that prints out _putchar
 * main -prints _putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	char c[8] = "_putchar";
	int i;
	/*For loop*/
	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);


}
