#include "hash_tables.h"

/**
 * key_index - return the index of a key given the hash function & h.tbl size
 * @key: the unique key for the table lookup
 * @size: the number of elements in the hash table array
 *
 * Return: the index of the key normalised to hash table array size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	/* check size argument */
	if (!(size > 0))
	{
		exit(EXIT_FAILURE);
	}

	/* use the hash function hash_djb2 and then normalize with a mod div*/
	index = hash_djb2(key) % size;

	return (index);
}
