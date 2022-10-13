/*****************************************************************************/
#include "main.h"
/**
 * _isupper - checks for lowercase
 * uses _putchar.c include file
 * Return: 1 if lowercase, 0 otherwise
 * @c: the input char
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

