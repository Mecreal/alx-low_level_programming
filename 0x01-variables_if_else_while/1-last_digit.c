#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the last digit of the random
* number stored in the variable nand checked if it begger than 5 10
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;
	printf("Last digit of %d is %d ", n, l_d);
	if (l_d > 5)
		printf("and is greater than 5\n");
	else if (l_d == 0)
		printf("and is 0\n");
	else if (l_d < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
