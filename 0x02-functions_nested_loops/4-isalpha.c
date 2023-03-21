#include "main.h"

/**
 * _isalpha - check if it is an alphabet
 * @c: a number to be checked
 * Return: 1 - if lowercase 0 id otherwise
*/

int _isalpha(int c)
{
	int i = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);

	return (i);
}
