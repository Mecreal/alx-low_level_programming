#include "main.h"

/**
* reverse_array - It reverse an array
* @a : th array
* @n : is the number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	while (i < n / 2.)
	{
		tmp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = tmp;
		i++;
	}
}
