/*****************************************************************************/
#include "main.h"
/**
 * _islower - checks for lowercase
 * uses _putchar.c include file
 * Return: 1 if lowercase, 0 otherwise
 * @c: the input char
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

