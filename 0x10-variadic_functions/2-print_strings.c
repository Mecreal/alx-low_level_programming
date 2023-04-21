#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 *@n: the number of parameters
 *@separator: the separator
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
