#include "main.h"

/**
* _strchr- function copies n bytes from memory area src to memory area dest
* @s : the first string
* @c : string to be add to s
* Return: A pointer
*/


char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
