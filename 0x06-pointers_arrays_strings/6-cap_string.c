/*****************************************************************************/
#include "main.h"
/**
 * cap_string - capitalise every word
 *
 * @str: the string to work with
 *
 * Return: the resulting string
 */
char *cap_string(char *str)
{
	int i, wordFound, size;

	size = _strlen(str);

	/* scan every character */
	wordFound = 0;
	for (i = 0; i < size; i++)
	{
		if (_isSeparator(str[i]))
		{
			wordFound = 1;
		}
		else if (wordFound == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('z' - 'Z');
			}
			wordFound = 0;
		}
	}

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

/**
 * _isSeparator - capitalise every word
 *
 * @ch: the string to work with
 *
 * Return: 1 if true, 0 otherwise
 */
int _isSeparator(char ch)
{
	switch (ch)
	{
	case ' ':
	case '\t':
	case '\n':
	case ',':
	case ';':
	case '.':
	case '!':
	case '?':
	case '"':
	case '(':
	case ')':
	case '{':
	case '}':
		return (1);
	default:
		return (0);
	}
}


