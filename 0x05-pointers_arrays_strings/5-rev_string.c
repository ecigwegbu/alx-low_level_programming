/*****************************************************************************/
#include "main.h"
/**
 * rev_string - reverse a string
 * uses _putchar()
 *
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0, len, tmp;

	while (s[i] != '\0')
		i++;
	len = i;

	for (i = 0; i <= len / 2 - 1; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - i - 1] = tmp;
	}
}

