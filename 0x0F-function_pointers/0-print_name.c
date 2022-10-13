/*****************************************************************************/
#include "function_pointers.h"
/**
 * print_name - print a name
 *
 * @name: the name to print
 * @f: the function to use to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

