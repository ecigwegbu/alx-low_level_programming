/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * main - return the length of a string
 * using _putchar()
 *
 * Return: 0 if all ok
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}

