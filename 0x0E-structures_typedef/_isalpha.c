/*****************************************************************************/
#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * uses _putchar.c include file
 * Return: 1 if alphabetic, 0 otherwise
 * @c: the input char
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}

