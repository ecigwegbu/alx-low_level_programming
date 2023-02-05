#include "hash_tables.h"

/**
 * hash_table_set - set element in hash table given key and value
 * @key: the unique key for the table lookup
 * @value: the value to set in the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nptr;
	/*const unsigned char *ukey = (const unsigned char *) key;  */

	/* generate index using hash function */
	index = hash_djb2((const unsigned char *) key) % ht->size;

	/* what if the key already exists?  */

	/* allocate memory to new node whose head pointer is at index */
	nptr = ht->array[index];
	nptr = malloc(sizeof(hash_node_t));

	/* some due dilligence checks; plus dup strings */
	if (nptr == NULL || (nptr->value = strdup(value)) == NULL\
			|| (nptr->key = strdup(key)) == NULL)
		return (0);
	nptr->next = NULL; /* dull terminate the linked list */

	ht->array[index] = nptr;  /* nptr was temp */

	return (1);
}
