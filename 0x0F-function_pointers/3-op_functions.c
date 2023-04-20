#include "3-calc.h"

/**
 * op_add - function of sum
 * @a: first number
 * @b: seconde number
 * Return: 0 if false, something else otherwise.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function of sub
 * @a: first number
 * @b: seconde number
 * Return: 0 if false, something else otherwise.
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - function of product
 * @a: first number
 * @b: seconde number
 * Return: 0 if false, something else otherwise.
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function of division
 * @a: first number
 * @b: seconde number
 * Return: 0 if false, something else otherwise.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}



/**
 * op_mod - function of modulo
 * @a: first number
 * @b: seconde number
 * Return: 0 if false, something else otherwise.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
