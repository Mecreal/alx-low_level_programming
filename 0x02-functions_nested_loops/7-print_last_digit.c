#include "main.h"

/**
 * print_last_digit - function to return last digit
 * @c: a number to be checked
 * Return: 1 - if lowercase 0 id otherwise
*/

int print_last_digit(int c)
{
	int lg = (c < 0 ? (-1 * c) % 10 : c % 10);

	_putchar(lg + '0');
	return (lg % 10);
}
