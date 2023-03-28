#include "main.h"

/**
* swap_int - tests function that prints if integer is positive or negative
* @n : point to the variable needed
* @p : second pointer
*/


void swap_int(int *n, int *p)
{
	int m;

	m = *n;
	*n = *p;
	*p = m;
}
