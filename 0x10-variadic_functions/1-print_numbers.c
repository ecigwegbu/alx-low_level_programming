/*****************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers, followed by a new line
 *
 * @separator: separates the numbers when printed
 * @n: the number of integers passed to the function
 * Return: the sum of the parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n > 0)
	{
		if (separator == NULL)
			separator = "";

		va_start(ap, n);
		printf("%d", va_arg(ap, int));
		for (i = 1; i < n; i++)
		printf("%s%d", separator, va_arg(ap, int));

		va_end(ap);
	}
	printf("\n");
}

