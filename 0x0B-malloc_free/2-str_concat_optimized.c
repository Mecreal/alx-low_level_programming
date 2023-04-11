#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat- returns a pointer to a 2 dimensional array of integers.
 * @s1: the string
 * @s2: the string 2
 * Return:  a pointer to a 2 dimensional array of integers.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int l1 = 0, l2 = 0, lt, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	lt = l1 + l2;

	concat = malloc(sizeof(char) * (lt + 1));

	if (concat == NULL)
		return NULL;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		concat[l1 + i] = s2[i];
		i++;
	}

	concat[lt] = '\0';

	return concat;
}