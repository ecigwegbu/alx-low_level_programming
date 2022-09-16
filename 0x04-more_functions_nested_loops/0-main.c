/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase
 * user _putchar.c include file
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

