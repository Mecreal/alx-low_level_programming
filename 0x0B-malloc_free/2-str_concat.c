#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- creating an array object
 * @str: the string
 * Return: a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 */

char *_strdup(char *str)
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
