#include <stdlib.h>
#include <stdio.h>


/**
 * main - function of sum
 * @argc: N of arguments
 * @argv: arguments
 * Return: the operator function
 */

int main(int argc, char *argv[])
{
	int in_1 = 0;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	in_1 = atoi(argv[1]);
	if (in_1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < in_1)
	{
		printf("%02hhx ", *(char *)main + i);
		i++;
	}
	printf("\n");
	return (0);
}
