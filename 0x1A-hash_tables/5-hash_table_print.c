#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: pointer to the hash table struct
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nptr;
	unsigned long i;
	char *delim; /*dictionary output delimiter */

	if (ht == NULL)
		return;

	printf("{");  /*initialise output */
	for (delim = "", i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (nptr = ht->array[i]; nptr != NULL; nptr = nptr->next)
			{
				printf("%s\'%s\': \'%s\'", delim, nptr->key, nptr->value);
			}
			delim = ", ";
		}

	}

	printf("}\n");  /*terminate output */
}
