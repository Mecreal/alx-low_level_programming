#include "main.h"

/**
* _strcat - appending two strings
* @dest : the first string
* @src : string to be add to dest
* Return: A pointer
*/


char *_strcat(char *dest, char *src)
{
	int l_dest = 0, l_src = 0;

	while (*(dest + l_dest) != '\0')
		l_dest++;

	while (*(src + l_src) != '\0')
	{
		*(dest + l_dest) = *(src + l_src);
		l_dest++;
		l_src++;

	}
	*(dest + l_dest) = '\0';
	return (dest);
}
