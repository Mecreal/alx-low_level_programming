#include "main.h"

/**
 * print_binary - binary form
 * @n : unsigned int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + 48);
}