#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that allocates memory using malloc
 * @n: first n bytes of s2, and null terminated
 * @s1: string 1
 * @s2: string 2
 * Return: char* or a NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int l1 = 0,  l2 = 0, lt = 0, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	} else
		while (*(s1 + l1) != '\0')
			l1++;
	if (s2 == NULL)
	{
		s2 = "";
	} else
		while (*(s2 + l2) != '\0')
			l2++;
	if (l2 >= n)
		lt = l1 + n;
	else
	{
		lt = l2 + l1;
		n = l2;
	}
	concat = malloc(sizeof(char) * (lt + 1));
	if (concat != NULL)
	{
		while (*(s1 + i) != '\0' && l1 != 0)
		{
			*(concat + i) = *(s1 + i);
			i++;
		}
		i = 0;
		while (i < n && l2 != 0)
		{
			concat[l1 + i] = s2[i];
			i++;
		}
		*(concat + lt + 1) = '\0';
		return (concat);
	}
	return (NULL);
}
