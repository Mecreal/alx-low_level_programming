#include "main.h"

/**
* _strncpy - appending two strings
* @dest : the first string
* @src : string to be add to dest
* @n : integer defining the zie of src
* Return: A pointer
*/


char *_strncpy(char *dest, char *src, int n)
{
	int l_dest = 0, l_src = 0;

	while (*(src + l_src) != '\0' && l_src < n)
	{
		*(dest + l_dest) = *(src + l_src);
		l_dest++;
		l_src++;

	}
	*(dest + l_dest) = '\0';
	return (dest);
}
