#include "hash_tables.h"

/**
 * print_ht - print a hash table
 * @ht: pointer to the hash table struct
 * Return: 1 if successful, 0 otherwise
 */

int print_ht(hash_table_t *ht)
{
	hash_node_t *nptr;
	unsigned long i;

	/* print hash table header */
	printf("INDEX\tKEY\t\t\tVALUE\n");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			for (nptr = ht->array[i]; nptr != NULL; nptr = nptr->next)
			{
				printf("%lu\t%s\t\t\t%s\n", i, nptr->key, nptr->value);
			}
		}

	}
	return (1);
}
