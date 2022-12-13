/*****************************************************************************/
#include "main.h"
/**
 * _isdigit - checks for digit
 * uses _putchar.c include file
 * Return: 1 if digit, 0 otherwise
 * @c: the input char
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

