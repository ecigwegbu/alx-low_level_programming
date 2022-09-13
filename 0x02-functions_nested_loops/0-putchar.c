#include "main.h"

/**
 * main - prints stuff without the std library
 * users _putchar.c include file
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int i;
	char ch[] = "_putchar\n";

	for (i = 0; i < 9; i++)
		_putchar(ch[i]);
	return (0);
}

