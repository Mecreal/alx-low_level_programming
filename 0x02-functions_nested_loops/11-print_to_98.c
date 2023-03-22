#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - we are printing all numbers till 98
 * @a: starting number
*/

void print_to_98(int n)
{
	int step = n <= 98 ? 1 : -1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += step;
	}
	printf("98\n");
}
