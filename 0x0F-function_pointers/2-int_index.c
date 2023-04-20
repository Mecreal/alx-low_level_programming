#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *  on each element of an array.
 * @array: the array
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: 0 if false, -1 If no element matches, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
	i++;
	}
	return (-1);
}
