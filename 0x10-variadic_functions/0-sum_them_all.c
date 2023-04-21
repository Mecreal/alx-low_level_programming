#include "variadic_functions.h"
/**
 * sum_them_all - the sum of n param.
 *@n: the number of parameters
* Return: this return the sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	while (i < n)
	{
		sum = sum + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}