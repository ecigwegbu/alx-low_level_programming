#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long index, hash;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");

	/* verify set operation */
	hash = hash_djb2((const unsigned char *) "betty");
	index = hash % ht->size;
	printf("ht size: %lu\n", ht->size);
	printf("Hash for key \"betty\": %lu\n", hash);
	printf("Index for key \"betty\": %lu\n", index);

	printf("Node:\n\tKey: %s\n\tValue: %s\n", ht->array[index]->key, ht->array[index]->value);

	return (EXIT_SUCCESS);
}
