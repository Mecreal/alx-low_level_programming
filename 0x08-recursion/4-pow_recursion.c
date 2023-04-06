#include "main.h"

/**
* _pow_recursion - recursion function for the power
* @x : the number
* @y : the power
* Return: the number
*/

int _pow_recursion(int x, int y)
{	
	if (y == 0)
		return (0);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
