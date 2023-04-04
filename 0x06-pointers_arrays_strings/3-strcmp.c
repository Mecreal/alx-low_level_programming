#include "main.h"

/**
* _strcmp -  function should work exactly like strcmp
* @s1 : the first string
* @s2 : string 2
* Return: the comparaison
*/


int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c1 = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		c1 += s1[i] - s2[i];
		i++;
	}
	return (c1);
}
