/*****************************************************************************/
#include <stdio.h>

/**
 * main - print all arguments to maint
 *
 * @argc: the number of arguments to main
 * @argv: the pointer to the array of arguments
 * Return: 0 if all ok
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
