#include "main.h"

/**
* _strcmp -  function should work exactly like strcmp
* @s1 : the first string
* @s2 : string 2
* Return: the comparaison
*/


int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int c1 = 0, c2 = 0;

	while (s1[i] != '\0')
	{
		c1 += s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		c2 += s2[j];
		j++;
	}
	return (c1 - c2);
}
