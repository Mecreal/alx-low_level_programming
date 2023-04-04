#include "main.h"

/**
* rot13 - ROT-13 crypting.
* @s: the string
* Return: the string in uppercase
*/

char *rot13(char *s)
{
	int i = 0, j = 0;
	char a_d[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char a_13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (s[i] != 0)
	{
		j = 0;
		while (a_13[j] != 0)
		{
			if (a_d[j] == s[i]){
				s[i] = a_13[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
