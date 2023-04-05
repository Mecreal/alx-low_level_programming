#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src to memory area dest
* @dest : the first string
* @src : string to be add to dest
* @n : integer defining the zie of src
* Return: A pointer
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
