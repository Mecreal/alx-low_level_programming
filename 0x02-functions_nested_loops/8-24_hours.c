#include "main.h"

/**
 * jack_bauer - function to gives hour : min
 * Return: 1 - if lowercase 0 id otherwise
*/

void jack_bauer(void)
{
	int h;
	int m;

	while (h < 24)
	{
		m = 60;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
