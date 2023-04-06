#include "main.h"

/**
* factorial - recursion function for the factorial
* @s : the string to be printed
* Return: the number 
*/

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
