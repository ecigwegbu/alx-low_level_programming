#include <stdio.h>
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
	ssize_t n = 0;
	int fd1 = -1, fd2 = -1;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = getInputFd(av[1]);
	fd2 = getOutputFd(av[2]);
	n = doCopy(fd1, fd2);
	if (n == -1)	/* read error */
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", av[1]);
		exit(98);

	}
	else if (n == -2)	/* write error */
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd1))		/* unable to close file_from */
	{
		write(STDERR_FILENO, "Error: Can't close %d\n", fd1);
		exit(100);
	}
	if (close(fd2))		/* unable to close file_from */
	{
		write(STDERR_FILENO, "Error: Can't close %d\n", fd2);
		exit(100);
	}
	return (0);
}

/**
 * getInputFd - get the input file descriptor
 *
 * @filename: pointer to the input file name
 * Return: the input file descriptor or -1 on error
 */
int getInputFd(const char *filename)
{
	int fd = -1;

	if (filename != NULL)
		fd = open(filename,  O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		exit(98);
	}

	return (fd);

}

/**
 * getOutputFd - get the output file descriptor
 *
 * @filename: pointer to the output file name
 * Return: the input file descriptor or -1 on error
 */
int getOutputFd(const char *filename)
{
	int fd = -1;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (filename != NULL)
		fd = open(filename,  O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (fd);
}



/*****************************************************************************/
#include "main.h"
#define BUFF_ ((size_t) 1024)
/**
 * doCopy - copies from fd1 to fd2.
 *
 * @fd1: file_from file descriptor
 * @fd2: file_to file descriptor
 * Return: 0 or the actual number of letters it could copy
 */
ssize_t doCopy(int fd1, int fd2)
{
	size_t nr = 0, nw = 0;
	size_t count = 0;
	char buff[BUFF_];

	/* read in batches of BUFF_ characters */
	while (1)
	{
		nr = read(fd1, buff, BUFF_);
		if (nr == (size_t) (-1))	/* read error */
		{
			if (close(fd1))		/* unable to close file_from */
			{
				write(STDERR_FILENO,
					"Error: Can't close %d\n", fd1);
				exit(100);
			}
			return (-1);
		}
		if (nr == 0)
			break;
		nw = write(fd2, buff, nr);
		if (nw != nr)	/* write error */
		{
			if (close(fd2))		/* unable to close file_from */
			{
				write(STDERR_FILENO,
					"Error: Can't close %d\n", fd2);
				exit(100);
			}
			return (-2);
		}
		count += nw;
		nr = 0;
	}
	return ((ssize_t) count);
}

