/*****************************************************************************/
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - print a buffer
 *
 * @b: the buffer
 * @size: the size to print
 */
void print_buffer(char *b, int size)
{
	int i, j = 0;
	char ten[] = "\0\0\0\0\0\0\0\0\0\0";
	/* ten pointer */
	char *tp = ten;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i++)
	{
		/* print row byte positon in hex with width 8 */
		if (j == 0)
		{
			printf("%08x:", i);
		}

		/* build ten-character string tp */
		if (isprint (*b))
			tp[j] = *b;
		else
			tp[j] = '.';

		/* add blank every two bytes */
		if (i % 2 == 0)
		{
			printf("%c", ' ');
		}

		/* print hex digits */
		printf("%02x", *b);

		/* End or line processing */
		if ((i + 1) % 10 == 0)
		{
			int k;
			/* print string at end of line */
			printf(" %s\n", tp);
			j = 0;

			/* then zero tp for next round */
			for (k = 0; k < 10; k++)
			tp[k] = '\0';
		}
		else
		{
			j++;
		}

		/* next byte please */
		b++;
	}

	/* tidy up leftover line */
	tidyEnd(j, tp);
}


/* tidy end */
void tidyEnd(int j, char *tp)
{
	if (j != 0)
	{
		int k;

		for (k = 0; k < (10 - j) * 2 + (10 - j) / 2; k++)

			/* pad line with blanks */
			printf(" ");

		/* the print remaining string */
		printf(" %s\n", tp);
	}
}
