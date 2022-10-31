#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies file_from to file_to
 *
 * @ac: number of arguments
 * @av: argument vector
 * Return: 0 on success, various exit codes on failure.
 */
int main(int ac, char **av)
{
	ssize_t n;
	int fd1 = -1, fd2 = -1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}

	fd1 = 2;
	fd2 = 0;
	n = fd1 + fd2;
	ac = n;
	n = *av[1];
	return (0);
}

