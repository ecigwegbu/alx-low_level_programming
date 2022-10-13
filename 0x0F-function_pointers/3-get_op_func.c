/*****************************************************************************/
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - selects the required operation
 *
 * @s: the operation passed as arg to the program
 * Return: a pointer to the corresponding program given as parameter
 */
int (*get_op_func(char *s))(int a, int b)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;


	return (0);  /* function pointer */
}
