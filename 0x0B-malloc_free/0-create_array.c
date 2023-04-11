#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creating an array object
 * @size: the size of the variable
 * @c: the character
 * Return: char* or a NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	if (arr != NULL)
	{
		while (i < size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
	return (NULL);
}
