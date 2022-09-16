/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * main - checks for digit
 * user _putchar.c include file
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}

