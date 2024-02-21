#include "main.h"

/**
* print_diagonal - Function that draws a diagonal line on the terminal.
* Where n is the number of times the character \ should be printed
* @n : the number of times the character _ should be printed
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i + 1; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
