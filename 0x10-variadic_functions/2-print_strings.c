/*****************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print strings, followed by a new line
 *
 * @separator: separates the strings when printed
 * @n: the number of integers passed to the function
 * Return: the sum of the parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		if (separator == NULL)
			separator = "";

		va_start(ap, n);
		printf("%s", va_arg(ap, char *));
		for (i = 1; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (!str)
				continue;
			printf("%s%s", separator, str ? str : "(nil)");
		}
		va_end(ap);
	}
	printf("\n");
}

