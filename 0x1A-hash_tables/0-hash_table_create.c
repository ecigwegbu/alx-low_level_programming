#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the number of elements in the hash table array
 *
 * Return: pointer to the hash table structure created (this structure
 * contains the hash table -ptr to ptr to head node of linked list - and
 * its size as elements)
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *ht;

	/* check size */
	if (!(size > 0))
	{
		return (NULL);
	}

	/* allocate storage for ht */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;

	/* allocate array */
	ht->array = malloc(size * sizeof(hash_node_t *));

	return (ht);
}

