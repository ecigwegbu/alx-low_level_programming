#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase without the std library
 * uses _putchar.c include file
 *
 * Return: void - exit status zero if all ok
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

