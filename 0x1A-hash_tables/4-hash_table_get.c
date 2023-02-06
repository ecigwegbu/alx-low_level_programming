#include "hash_tables.h"

int set_no_collision(hash_table_t *ht, const char *key, const char *value);
int set_with_collision(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - get element in hash table given key
 * @ht: pointer to the hash table
 * @key: the unique key for the table lookup
 *
 * Return: the associated value if it succeeded, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *nptr;

	if (ht == NULL)
		return (0);

	index = hash_djb2((const unsigned char *) key) % ht->size;
	nptr = ht->array[index]; /* temp pointer to element in array / list */
	for (nptr = ht->array[index]; nptr != NULL; nptr = nptr->next)
	{
		if (strcmp(nptr->key, key) == 0)
			return (nptr->value);
	}

	return (NULL);  /* not found */
}
