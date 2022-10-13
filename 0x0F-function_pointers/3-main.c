#include <stdio.h>
#include "3-main.h"

/**
 * main - the main program
 *
 * @argc:  number of args
 * @argv:  argument vector
 * Return:  0 if ok, anything else otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	elseif (argv[2][0] != '+' || argv[2][0] != '-' \
		argv[2][0] != '*' || argv[2][0] != '/' \
		argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1];
	b = atoi(argv[3];


	return (0);
}
