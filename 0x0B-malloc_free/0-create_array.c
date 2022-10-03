/*****************************************************************************/
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars
 * uses _putchar()
 *
 * @size: the size of the array
 * @c: the char to fill in
 * Return: the char array created
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = (char *)malloc((size) * sizeof(char));

	if (size == 0 || !arr)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
		arr[size] = '\0';

	return (arr);

}

