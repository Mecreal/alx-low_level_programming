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
	int *arr;

	arr = malloc(sizeof(c) * size);
	if (arr != NULL)
	{
		return (arr);
	}
	return (NULL);
}
