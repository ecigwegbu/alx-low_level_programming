#include <stdio.h>

/**
 * main - print z-a on screen
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');

	return (0);
}

