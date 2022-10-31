/*****************************************************************************/
#include "main.h"
/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 *
 * @filename: pointer to the string containing the name of the file
 * @letters: the number of characters to be copied over
 * Return: 0 or the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nr = 0, nw;	/* num of characters read/wr in the round */
	ssize_t count = 0;
	int fd;
	char *buff = NULL;

	if (filename == NULL)
		return (0);
	if ((letters == 0) || ((ssize_t) letters > SSIZE_MAX))
		return (0);
	fd = open(filename,  O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(1024);
	if (!buff)
		return (0);
	/* read in batches of 1024 characters */
	while (1)
	{
		nr = read(fd, buff, letters - count);
		if (nr <= 0)	/* ie we have read all we need to read */
			break;
		nw = write(STDOUT_FILENO, buff, nr);
		if (nw != nr)	/* check for write error */
			return (0);

		count += nw;
		nr = 0;
	}
	close(fd);
	free(buff);
	if (count != (ssize_t) letters)	/* In case could not write up to required */
		return (0);
	return (count);
}

