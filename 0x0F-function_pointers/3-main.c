#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the main program
 *
 * @argc:  number of args
 * @argv:  argument vector
 * Return:  0 if ok, anything else otherwise
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char op;
	int (*command)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2][0]; /* the command character */

	if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		printf("Error\n");
		exit(99);
	}

	/* convert args to integer operands */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	command = get_op_func(argv[2]);  /* get function pointer/command */
	if (command)
	{
		result = command(a, b);  /* put function pointer to work! */
		printf("%d\n", result);
	}
	return (0);
}

