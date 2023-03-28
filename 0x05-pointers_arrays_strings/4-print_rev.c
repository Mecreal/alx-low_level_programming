#include "main.h"

/**
* print_rev - printing a string
* @s : the pointer of the string
*/


void print_rev(char *s)
{
	int i = 0;

	do {
		i++;
		s++;
	} while (*s != '\0');
	while (i != 0)
	{
		_putchar(*(s + i - 1));
		i--;
	}
	_putchar('\0');
	_putchar('\n');
}
