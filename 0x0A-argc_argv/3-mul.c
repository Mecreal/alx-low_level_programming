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
	int multi = 1;

	if (argc >= 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	} else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
