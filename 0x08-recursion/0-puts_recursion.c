/*****************************************************************************/
#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * uses _putchar()
 *
 * @s: the string to print
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
