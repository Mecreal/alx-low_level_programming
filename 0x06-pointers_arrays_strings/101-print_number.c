#include "main.h"

/**
* print_number - printing a number.
* @s: the integer to be printed
* Return: the string in uppercase
*/

void print_number(int n)
{
	unsigned int x;
	int div = 1, mod = 0;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	} else{
		x = n;
	}
	while (x / div > 9)
		div *= 10;
	while( div > 0)
	{
		x /= 10;
		mod = x % 10;
		_putchar('0' + mod);
		div /= 10;
	}
}
