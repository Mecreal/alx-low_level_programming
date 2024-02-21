#include "main.h"

/**
* _isupper - tests function that prints if integer is positive or negative
* @c : the char
* Return: returns 1 if Upper 0if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
