/*****************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print anything
 *
 * @format: the format specifier
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	const char *fmt = format;
	char *sep = "";
	char status = 0;

	va_start(ap, format);
	while (*fmt)
	{
		if (*fmt != 'c' && *fmt != 'i' && *fmt != 'f' && *fmt != 's')
		{
			fmt++;
			continue;
		}
		switch (*fmt++)
		{
		case 'c':              /* char */
		printf("%s%c", sep, (char) va_arg(ap, int));
		status = 1;
			break;
		case 'i':              /* int */
		printf("%s%d", sep, va_arg(ap, int));
		status = 1;
			break;
		case 'f':              /* float */
			printf("%s%f", sep, (float) va_arg(ap, double));
			status = 1;
			break;
		case 's':              /* string */
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", sep, s);
			status = 1;
			break;
		}
	if (status == 1)
		sep = ", ";
	}
	va_end(ap);
	printf("\n");
}
