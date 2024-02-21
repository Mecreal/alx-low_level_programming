#include "main.h"

/**
* print_triangle - function that prints a triangle, followed by a new line
* @n : is the size of the triangle
*/

void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < n - i - 1)
					_putchar(' ');
				else if (j >= n - i - 1)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
