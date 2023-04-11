#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers.
 * @str: the string
 * Return:  a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	char *dup;
	int len = 0 ,i = 0;


	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup != NULL)
	{
		while (*(str + i) != '\0')
		{
			*(dup + i) = *(str + i);
			i++;
		}
		return (dup);
	}
	return (NULL);
}
