#include "main.h"

/**
* _isdigit - function that checks for a digit (0 through 9).
* @c : the char
* Return: returns 1 if digit 0if not
*/

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
