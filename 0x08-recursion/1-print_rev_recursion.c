/*****************************************************************************/
#include "main.h"
/**
 * _print_rev_recursion - print string in reverse using recursion
 * uses _putchar()
 *
 * @s: the string
 * Return: the length of the string
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	else if (!(*(s + 1)))
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*(s - 1));
}
