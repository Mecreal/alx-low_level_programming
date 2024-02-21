#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
* main - program that finds and prints the largest
* prime factor of the number 612852475143, followed by a new line.
* Return: 0 if success
*/

int main(void)
{
	long int i;

	const long int n = 612852475143;

	long int temp = -1;

	long int a = n;

	if (n % 2 == 0)
	{
		temp = 2;
		a = n / 2;
	}

	for (i = 3; i <= a; i += 2)
	{
		while (a % i == 0)
		{
			printf("%ld \n", temp);
			temp = i;
			a = a / i;
		}
	}

	printf("%ld \n", temp);
	return (0);
}
