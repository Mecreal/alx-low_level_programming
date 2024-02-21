#include "main.h"
/**
* print_number -  function that prints an integer.
* @n : the number to be printed
*/
void print_number(int n)
{
	int temp = n;

	int reversed = 0;
	int last_digit;

	if (n == 0)
	{
		_putchar('0');
	} else
	{
		if (n < 0)
		{
			_putchar('-');
		}

		while (temp != 0)
		{
			last_digit = temp % 10;

			if (temp < 0)
			{
				last_digit = -last_digit;
			}
			reversed = reversed * 10 + last_digit;
			temp /= 10;
		}
		while (reversed != 0)
		{
			_putchar('0' + reversed % 10);
			reversed /= 10;
		}
	}
}
