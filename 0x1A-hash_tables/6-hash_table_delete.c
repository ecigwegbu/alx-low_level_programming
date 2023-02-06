#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: pointer to the hash table struct
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nptr = NULL, *nptr2 = NULL;
	unsigned long i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (nptr = ht->array[i]; nptr != NULL;)
			{
				free(nptr->key);
				free(nptr->value);
				nptr2 = nptr->next;
				free(nptr);
				nptr = nptr2;
			}
		}

	}
	free(ht->array);
	free(ht);
	nptr = NULL;
	nptr2 = NULL;
}
