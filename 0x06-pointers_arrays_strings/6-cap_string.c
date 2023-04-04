#include "main.h"

/**
* cap_string - convert to Uppercase
* @s: the string
* Return: the string in uppercase
*/

char *cap_string(char *s)
{
	int i = 1, j = 0;
	char seps[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int size = sizeof(seps) / sizeof(seps[0]);

	s[0] = ((s[0] >= 'a' && s[0] <= 'z') ? s[0] - 32 : s[0]);
	while (s[i] != 0)
	{
		j = 0;
		while (j <= size / 2)
		{
			if ((s[i - 1] == seps[j]))
				s[i] = ((s[i] >= 'a' && s[i] <= 'z') ? s[i] - 32 : s[i]);	
			j++;
		}
		i++;
	}
	return (s);
}
