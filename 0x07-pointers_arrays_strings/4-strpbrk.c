#include "main.h"

/**
* _strpbrk -  function that searches a string for any of a set of bytes.
* @accept : consist only of bytes
* @s : string to be add to dest
* Return:  the number of bytes in the initial segment of s which consist
* only of bytes from accept
*/


char *_strpbrk(char *s, char *accept)
{
	unsigned int l = 0;

	unsigned int i = 0;

	while (s[l] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[l] == accept[i])
				return (s + l);
			i++;
		}
		l++;
	}
	return ('\0');
}
