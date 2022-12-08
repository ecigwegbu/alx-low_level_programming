#include "main.h"

/**
 * is_palindrome_num - determine if an integer is a palindrome
 * @num: the integer
 * Return: 1 if it is a palindrome, 0 if it is not
 */

int is_palindrome_num(int num)
{
	char *num_str;   /* free later */
	int len, stop_at, i, i_mirror, err = 0;

	(void) err;
	/* convert number to string */
	num_str = _itostr(num);

	/* get the string length */
	len = (int) _strlen(num_str);

	stop_at = (len / 2) - 1;
	/* compare sides */
	for (i = 0; i <= stop_at; i ++)
	{
		i_mirror = len - (i + 1);
		if (num_str[i] != num_str[i_mirror])
		{
			free(num_str);
			return (0);  /* no palindrome */
		}
	}

	free(num_str);
	return (1);  /* palindrome found */
}

/*
int main(int argc, char *argv[])
{
	int i, err = 0;

	(void) err;
	(void) argc;

	i = _strtoi(argv[1], &err);
	if (is_palindrome_num(i))
		printf("It's a palindrome!\n");
	else
		printf("Not a palindrome!\n");

	return (0);
}

*/
