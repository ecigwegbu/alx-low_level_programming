/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * main - checks for lowercase
 * uses _putchar.c include file
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

