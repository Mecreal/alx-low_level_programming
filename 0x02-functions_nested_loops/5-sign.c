#include "main.h"

/**
 * print_sign - check if it is an alphabet
 * @c: a number to be checked
 * Return: 1 - if lowercase 0 id otherwise
*/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar ('+');
		return (1);
	} else if (c < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
		return (0);
	}
}
