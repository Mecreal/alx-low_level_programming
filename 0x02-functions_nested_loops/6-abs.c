#include "main.h"

/**
 *_abs -calculate the absolut value 
 * @c: a number to be checked
 * Return: 1 - if lowercase 0 id otherwise
*/

int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	} else if (c < 0)
	{
		return (-1*c);
	}
	return (0);
}
