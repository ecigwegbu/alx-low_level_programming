/*****************************************************************************/
#include <stdio.h>

/**
 * main - print programe name followed by a new line
 *
 * @argc: the number of arguments to main
 * @argv: the pointer to the array of arguments
 * Return: 0 if all ok
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
