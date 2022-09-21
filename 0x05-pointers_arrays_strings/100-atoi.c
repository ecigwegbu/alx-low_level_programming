/*****************************************************************************/
#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: the string containing the text to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int value = 0;

	/* get the start of digits AND sign */
	while (s[i] > '9'  || s[i] < '0')
	{
		if (s[i] == '\0')
			return (0);
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	/* get all digits now */
	value = s[i] - 48;
	i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		value = (value * 10) + (s[i] - 48);
		i++;
	}

	return (sign < 0 ? -value : value);
}
