#include <stdio.h>

/**
 * main - prints hex 0-f on screen using putchar thrice
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

