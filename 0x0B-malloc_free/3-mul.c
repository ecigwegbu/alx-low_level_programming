/*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 *
 * @argc: the number of arguments to main
 * @argv: the pointer to the array of arguments
 * Return: 0 if all ok, else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}

