/*****************************************************************************/
#include "main.h"
/**
 * puts2 - print every other charcter of a string
 * uses _putchar()
 *
 * @str: the string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

