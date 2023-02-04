#include "hash_tables.h"

/**
 * hash_table_set - set element in hash table given key and value
 * @key: the unique key for the table lookup
 * @value: the value to set in the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
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
