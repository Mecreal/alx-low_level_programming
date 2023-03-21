#include "main.h"

/**
 * _islower - see bellow
 * @c: a number to be checked
 * Return: 1 - if lowercase 0 id otherwise
*/

int _islower(int c)
{
	int i = (c >= 'a' && c <= 'z' ? 1 : 0);

	return (i);
}
