#include <stdio.h>

/**
 * main - prints 0-9 on screen, using only putchar; char forbidden
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

