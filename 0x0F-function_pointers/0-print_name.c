#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function that return another function
 * @name: the argument to be sent to name_fun
 * @name_fun: the callback function
 */

void print_name(char *name, void (*name_fun)(char *))
{
	if (name == NULL || name_fun == NULL)
	{
		return;
	}
    name_fun(name);

}
