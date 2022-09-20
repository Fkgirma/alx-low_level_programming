#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if letter is upper case
 * @c: Number to be checked
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
