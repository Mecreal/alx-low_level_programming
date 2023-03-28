#include "main.h"

/**
* reset_to_98 - tests function that prints if integer is positive or negative
* @n : point to the variable needed
* @p : second pointer
*/


void reset_to_98(int *n, int *p)
{
	int m;

	m = *n;
	*n = *p;
	*p = m;
}
