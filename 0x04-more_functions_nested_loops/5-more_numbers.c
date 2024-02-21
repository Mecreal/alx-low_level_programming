#include "main.h"

/**
* more_numbers - function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
	int i, j, z, m;

	for (j = 0; j <= 9; j++)
	{
		z = 0;
		m = 0;
		for (i = 0; i <= 14; i++)
		{
			m = (i > 9 ? 1 : i);
			_putchar(m + 48);
			if (i > 9)
			{
				_putchar(z + 48);
				z += 1;
			}
		}
		_putchar('\n');
	}
}
