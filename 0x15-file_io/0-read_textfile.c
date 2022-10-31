/*****************************************************************************/
#include "main.h"
#define BUFF_ 1024LU
/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 *
 * @filename: pointer to the string containing the name of the file
 * @letters: the number of characters to be copied over
 * Return: 0 or the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t nr = 0, n2r = 0, nw;
	size_t count = 0;
	int fd;
	char buff[BUFF_];

	if (filename == NULL)
		return (0);
	if ((long int) letters < 0)
		return (0);
	/*if ((letters == 0) || ((ssize_t) letters > SSIZE_MAX)) */
	if (letters == 0)
		return (0);
	fd = open(filename,  O_RDONLY);
	if (fd == -1)
		return (0);
	/* read in batches of BUFF_ characters */
	while (1)
	{
		n2r = (letters - count) > BUFF_ ? BUFF_ : (letters - count);
		if (n2r == 0)
			break;
		nr = read(fd, buff, n2r);
		if (nr == (size_t) (-1))
			return (0);
		if (nr == 0)
			break;
		nw = write(STDOUT_FILENO, buff, nr);
		if (nw != nr)
			return (0);
		count += nw;
		n2r = nr = 0;
	}
	close(fd);
	return ((ssize_t) count);
}

