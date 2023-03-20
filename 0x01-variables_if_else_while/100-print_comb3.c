#include <stdio.h>

/**
 * main - printing alphabets
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;
	int m;

	while (n < 57)
	{
		m = 48;
		while (m < 58)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n == 56 && m == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
