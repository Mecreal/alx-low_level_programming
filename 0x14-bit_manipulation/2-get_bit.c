#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to evaluate
 * @index: the index, starting from 0 of the bit you want to get
 * Return: Value of bit at index, or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}