#include "main.h"

/**
 * times_table - times tables function till 9
 * Return: 1 - if lowercase 0 id otherwise
*/

void times_table(void)
{
	int h = 0;
	int m = 0;

	while (h < 10)
	{
		m = 0;
		while (m < 10)
		{
			if (h * m < 10)
			{
				_putchar((h * m) + '0');
			} else
			{
				_putchar((h * m) / 10 + '0');
				_putchar((h * m) % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		m++;
		}
		_putchar('\n');
	h++;
	}
}
