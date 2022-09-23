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
	char alpha[] = "AaeEoOtTlL";
	char digit[] = "4433007711";

	/* scan for each character in string */
	for (i = 0; str[i] != '\0'; i++)

		/* scan for each letter */
		for (j = 0; alpha[j] != '\0'; j++)
			/* swap digit for alpha */
			if (str[i] == alpha[j])
				str[i] = digit[j];

	return (str);
}

/**
 * _strlen - determines the length of a string
 * @str: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}
