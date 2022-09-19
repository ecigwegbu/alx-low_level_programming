/*****************************************************************************/
#include "main.h"
/**
 * _puts - print a string in reverse
 * uses _putchar()
 *
 * @s: the string to print in reverse
 */
void print_rev(char *s)
{
	int i = 0, len;

	while (s[i] != '\0')
		i++;
	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

