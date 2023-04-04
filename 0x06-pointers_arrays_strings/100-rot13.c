#include "main.h"

/**
* leet - changing 1337.
* @s: the string
* Return: the string in uppercase
*/

char *leet(char *s)
{
	int i = 0, j = 0;
	char let[] = {'a', 'e', 'o', 't', 'l'};
	char numb[] = {'4', '3', '0', '7', '1'};


	while (s[i] != 0)
	{
		j = 0;
		while (j < 5)
		{
			if ((s[i] == let[j]) || (s[i] == (let[j] - 32)))
				s[i] = numb[j];
			j++;
		}
		i++;
	}
	return (s);
}
