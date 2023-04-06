#include "main.h"

/**
* _memset - fills memory with constants byte
* @dest : the first string
* @src : constant byte
* @n : integer defining the zie of src
* Return: A pointer
*/


char *_memset(char *dest, char src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src;
		i++;
	}
	return (dest);
}
