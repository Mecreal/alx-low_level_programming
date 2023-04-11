#include "stdio.h"
#include <stdlib.h>

/**
*  main - the main function fot the name code
* @argc : number of input in arguments
* @argv : the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
	}
	return (0);
}
