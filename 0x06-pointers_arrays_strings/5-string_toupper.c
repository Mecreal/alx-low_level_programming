#include "main.h"

/**
* string_toupper - convert to Uppercase
* @s: the string
* Return: the string in uppercase
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		s[i] = (s[i] >= 'a' && s[i] <= 'z' ? s[i] - 32 : s[i]);
		i++;
	}
	return (s);
}
