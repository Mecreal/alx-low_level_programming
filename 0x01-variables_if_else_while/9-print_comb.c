#include <stdio.h>

/**
 * main - printing alphabets
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n == 57)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
