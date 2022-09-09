#include <stdio.h>

/**
 * main - prints a-z except q and e on screen
 *
 * Return: 0 - exit status zero if all ok
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');

	return (0);
}

