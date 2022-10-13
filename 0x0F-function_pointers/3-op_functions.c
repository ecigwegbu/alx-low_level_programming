/*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - operator add
 *
 * @a: operand 1
 * @b: operand 2
 * Return: the result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operator sub
 *
 * @a: operand 1
 * @b: operand 2
 * Return: the result
 */
int op_sub(int a, int b)
{

	return (a - b);
}


/**
 * op_mul - operator multiply
 *
 * @a: operand 1
 * @b: operand 2
 * Return: the result
 */
int op_mul(int a, int b)
{

	return (a * b);
}


/**
 * op_div - operator div
 *
 * @a: operand 1
 * @b: operand 2
 * Return: the result
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
 * op_mod - operator mod
 *
 * @a: operand 1
 * @b: operand 2
 * Return: the result
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

