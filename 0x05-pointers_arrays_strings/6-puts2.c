#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @s: string to print the chars from
 */
void puts2(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
