/*****************************************************************************/
#include "main.h"
/**
 * leet - leet a string
 *
 * @str: the string to leet
 *
 * Return: the resulting string
 */
char *leet(char *str)
{
	int i, j;
	char alpha[] = "aAeEoOtTlL";
	char digit[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = digit[j];
			}
		}
	}
	return (str);
}

