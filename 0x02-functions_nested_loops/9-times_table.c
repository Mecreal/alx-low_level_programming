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
			_putchar((h * m) + '0');
			_putchar(',');
			_putchar('\t');
		m++;
		}
		_putchar('\n');
	h++;
	}
}
