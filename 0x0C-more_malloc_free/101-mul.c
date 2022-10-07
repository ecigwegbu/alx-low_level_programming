/*****************************************************************************/
#include "main.h"
#include <stdlib.h>
#include "_atoi.c"

void _print_error(int err);

/**
 * main - multiply two positive integers
 *
 * @argc: the number of arguments to main()
 * @argv: the arguments vector
 * Return: the product of the two arguments to main
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	_print_error(98);

	(void)argv;
	return (0);

}

/**
 * _print_error - display error message and quit
 * @err: the error code to display
 */
void _print_error(int err)
{
	(void)err;
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

