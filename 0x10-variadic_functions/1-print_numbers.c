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

	if (n == 0)
	{
		printf("\n");
		exit(98);
	}

	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("%s%d", separator, va_arg(ap, int));
	printf("\n");
	va_end(ap);
}

