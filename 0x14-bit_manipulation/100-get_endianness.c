/*****************************************************************************/
#include "main.h"

/**
 * get_endianness - detects the endianness of a computer
 *
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;

	return (*((char *)&i) ? 1 : 0);
}

