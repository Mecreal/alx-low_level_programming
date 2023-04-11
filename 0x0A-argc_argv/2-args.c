#include "stdio.h"

/**
*  main - the main function fot the name code
* @argc : number of input in arguments
* @argv : the arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i + 1]);
		i++;
	}
	return (0);
}
