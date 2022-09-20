/*****************************************************************************/
#include "main.h"
/**
 * puts_half - print second half of a string
 * uses _putchar()
 *
 * @str: the string to print
 */
void puts_half(char *str)
{
	int i = 0, len, start;

	while (str[i] != '\0')
		i++;
	len = i;
	start = (len % 2 == 0 ? len / 2 : len / 2 + 1);
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

