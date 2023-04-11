#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: array of argument strings
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{

	int total_length;
	int i, j;
	char *new_str, *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	new_str = (char *)malloc(total_length + 1);
	if (new_str == NULL)
		return (NULL);

	ptr = new_str;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}

	*ptr = '\0';

	return (new_str);
}
