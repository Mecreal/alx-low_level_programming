#include "main.h"

/**
*  _print_rev_recursion - recursion function for the invers
* @s : the string to be printed
*/

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*)
	}
	else
		_putchar('\n');
}
