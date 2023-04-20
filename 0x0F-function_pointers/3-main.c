#include "3-calc.h"


/**
 * main - function of sum
 * @argc: N of arguments
 * @argv: arguments
 * Return: the operator function
 */

int main(int argc, char *argv[])
{
	int in_1 = 0;
	int in_2 = 0;
	int res = 0;
	char *operator;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	in_1 = atoi(argv[1]);
	in_2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator);

	res = calc(in_1, in_2);

	printf("%d\n", res);
	return (0);
}
