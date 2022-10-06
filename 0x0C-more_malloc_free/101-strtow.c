/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
#include "libmy.c"

char *_skip_blanks(char *str);
char *_skip_word(char *str);
int _count_words(char *str);
char **_bld_words(char **words, char *str, int wc);

/**
 * strtow - split a string into words
 *
 * @str: the string to split into words
 * Return: the array of words
 */
char **strtow(char *str)
{
int str_sz, wc = 0;
char **words;

if (!str)
return (NULL);
str_sz = _strlen(str);
if (str_sz == 0)
return (NULL);
wc = _count_words(str);
if (wc <= 0)
return (NULL);
words = (char **) malloc((wc + 1) * sizeof(char *));
if (!words)
return (NULL);
words[wc] = NULL;

_bld_words(words, str, wc);
return (words);
}


/**
 * _skip_blanks - skip blanks in string
 *
 * @str: the string to split into words
 * Return: string without leading blanks
 */
char *_skip_blanks(char *str)
{
while (*str == ' ' && *str != '\0')
{
str++;
}
if (*str == '\0')
{
str--;
return (NULL);
}
return (str);
}


/**
 * _skip_word - skip word in string
 *
 * @str: the string to split into words
 * Return: string with next word stripped
 */
char *_skip_word(char *str)
{
while (*str != ' ' && *str != '\0')
{
str++;
}
if (*str == '\0')
{
str--;
return (NULL);
}
return (str);
}

/**
 * _count_words - count words in string
 *
 * @str: the string to split into words
 * Return: the number of words
 */
int _count_words(char *str)
{
int wc = 0;
for (;;)
{
str = _skip_blanks(str);
if (!str)
break;

wc++;
str = _skip_word(str);
if (!str)
break;
}
return (wc);
}

/**
 * _bld_words - count words in string
 *
 * @str: the string to split into words
 * @words: the string array pointer
 * @wc: the number of words
 * Return: the array of words
 */
char **_bld_words(char **words, char *str, int wc)
{
int i, a;

for (i = 0; i < wc; i++)
{
int wl = 0;

str = _skip_blanks(str);
if (!str)
break;
while (*str != ' ' && *str != '\0')
{
str++;
wl++;
}
words[i] = (char *) malloc((wl + 1) * sizeof(char));
if (words[i] == NULL)
{
for (a = 0; a < i; a++)
free(words[a]);
free(words);
return (NULL);
}
str -= wl;
_strncpy(words[i], str, wl);
words[i][wl] = '\0';
str += wl;
}
return (words);
}
