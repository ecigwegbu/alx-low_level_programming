/*****************************************************************************/
#include "main.h"
#define BUFF_ ((size_t) 1024)

size_t _strlen(char *s);

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: pointer to the string containing the name of the file
 * @text_content: pointer to the text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t nw = 0, n2w = 0;
	size_t count = 0;
	size_t len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename,  O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	/* read in batches of BUFF_ characters */
	while (1)
	{
		/* set n2w */
		n2w = (len - count) > BUFF_ ? BUFF_ : (len - count);
		if (n2w == 0)
			break;
		nw = write(fd, text_content, n2w);
		if (nw != n2w)	/* probably no write permission */
		{
			close(fd);
			return (-1);
		}
		count += nw;
		text_content += nw;
		n2w = 0;
	}
	close(fd);
	return (1);
}

/*****************************************************************************/
/**
 * _strlen - returns the length of a string
 * uses _putchar()
 *
 * @s: the string
 * Return: the length of the string
 */
size_t _strlen(char *s)
{
	size_t i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

