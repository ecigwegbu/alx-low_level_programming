/*****************************************************************************/
#include <stdio.h>

/**
 * main - print the number of programe arguments
 *
 * @argc: the number of arguments to main
 * @argv: the pointer to the array of arguments
 * Return: 0 if all ok
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
