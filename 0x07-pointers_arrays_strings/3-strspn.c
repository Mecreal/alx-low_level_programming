#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src to memory area dest
* @accept : consist only of bytes
* @s : string to be add to dest
* Return:  the number of bytes in the initial segment of s which consist only of bytes from accept
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	unsigned int i = 0;
	
	while (s[l] != '\0')
	{
		int flag = 0;
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[l] == accept[i])
			{
				l++;
				flag = 1;
				break;
			}
			i++;
		}
		if (flag == 0)
		break;
	}
	return (l);
}
