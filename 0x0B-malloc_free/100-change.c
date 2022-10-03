/*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
/**
 * main - change machine
 *
 * @argc: the number of command line argumemnts
 * @argv: the command line arguments - 1 - value in cents
 * Return: 0 if all ok
 */
int main(int argc, char *argv[])
{
	int value, c25, c10, c5, c2, c1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("0\n");
	}
	else
	{
		/* parse for each coin type in turn */
		c25 = value / 25;
		c10 = (value % 25) / 10;
		c5 = ((value % 25) % 10) / 5;
		c2 = (((value % 25) % 10) % 5) / 2;
		c1 = (((value % 25) % 10) % 5) % 2;

		printf("%d\n", c25 + c10 + c5 + c2 + c1);
	}

	return (0);
}
