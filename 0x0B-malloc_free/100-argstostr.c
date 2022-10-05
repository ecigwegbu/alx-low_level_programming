/*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "0-strcat.c"
#include "2-strlen.c"
/**
 * argstostr - concatenates all args in a command
 *
 * @ac: the no of args
 * @av: the array of all args
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *buff, *nl = "\n";
	int i, buff_sz;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calc buffer size */
	buff_sz = ac;
	for (i = 0; i < ac; i++)
		buff_sz += _strlen(av[i]);

	/* allocate memory for buffer */
	buff = (char *) malloc(buff_sz);

	/* concatenate all args */
	for (i = 0; i < ac; i++)
	{
		_strcat(buff, av[i]);
		_strcat(buff, nl);
	}

	return (buff);
}
