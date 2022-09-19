/*****************************************************************************/
#include "main.h"
#include <stdio.h>

/**
 * main - swaps two numbers using pointers
 * using _putchar()
 *
 * Return: 0 if all ok
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);

	return (0);
}

