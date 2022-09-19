/*****************************************************************************/
#include "main.h"
#include "stdio.h"

/**
 * main - reverse a string
 * using _putchar()
 *
 * Return: 0 if all ok
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);

	return (0);
}

