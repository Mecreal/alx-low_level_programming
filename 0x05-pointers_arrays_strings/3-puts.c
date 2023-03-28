#include "main.h"

/**
* _puts - printing a string
* @s : the pointer of the string
*/


void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
