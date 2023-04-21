#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 *@n: the number of parameters
 *@separator: the separator
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *sep;
	unsigned int i = 0;

	if (separator == NULL)
		*sep = '';
	sep = separator;
	if (n == 0)
		return (0);

	va_start(args, n);
	while (i < (n - 1))
	{
		printf("%d %s", va_arg(args, unsigned int), sep);
		i++;
	}
	printf("%d\n", va_arg(args, unsigned int));
	va_end(args);
}
