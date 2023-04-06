#include "main.h"

/**
* _strlen_recursion - recursion function for the numb of str
* @s : the string to be printed
* Return: the number of str
*/

int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
