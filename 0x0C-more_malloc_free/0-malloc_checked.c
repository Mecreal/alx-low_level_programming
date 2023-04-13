#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the size of the the space allocated
 * Return: char* or a NULL
 */

void *malloc_checked(unsigned int b)
{
	char *mal_check;

	mal_check = malloc(b);
	if (mal_check == NULL)
	{
		exit(98);
	}
	return (mal_check);
}
