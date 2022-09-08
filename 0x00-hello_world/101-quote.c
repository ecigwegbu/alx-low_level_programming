#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print a simple message to stderr and exit
 *
 * Return: 1 - exit status zrequired
 */
int main(void)
{
	system("echo \"and that piece of art is useful\\\" \
- Dora Korpar, 2015-10-19\" >&2");
	return (1);
}
