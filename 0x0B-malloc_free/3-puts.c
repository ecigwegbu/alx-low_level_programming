/*****************************************************************************/
#include "main.h"
/**
 * _puts - print a string
 * uses _putchar()
 *
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

