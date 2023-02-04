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

	hash_table_t *ht; /* this struct holds the actual ht & its size*/
	/* the actual hash table is a hash_node_t* array: */
	/* hash_table = hash_node_t[] */

	/* check size argument */
	if (!(size > 0))
	{
		return (NULL);
	}

	/* allocate storage for ht struct; actual ht array will be all' later*/
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}


	/* now initialise the elements of the ht struct */
	ht->size = size;

	/* allocate array */
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		return (NULL);
	}

	return (ht);
}
