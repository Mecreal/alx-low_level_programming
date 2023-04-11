#include "stdio.h"
#include <stdlib.h>

/**
*  main - the main function for addition
* @argc : number of input in arguments
* @argv : the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, numbers, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != 0; j++)
		{
			if (argv[i][j] < '0' && argv[i] > '9')
			{
				print("Error\n");
				return (1);
			}
		}
		numbers = atoi(argv[i]);
		sum += numbers;
	}
	printf("%d\n", sum);
	return (0);
}
