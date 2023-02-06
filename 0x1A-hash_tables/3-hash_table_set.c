#include "hash_tables.h"

int set_no_collision(hash_table_t *ht, const char *key, const char *value);
int set_with_collision(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_set - set element in hash table given key and value
 * @ht: pointer to the hash table
 * @key: the unique key for the table lookup
 * @value: the value to set in the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nptr;
	int result;

	if (ht == NULL)
	{
		return (0);
	}

	index = hash_djb2((const unsigned char *) key) % ht->size;
	nptr = ht->array[index]; /* temp pointer to element in array / list */
	if (nptr == NULL)
		result = set_no_collision(ht, key, value);
	else
		result = set_with_collision(ht, key, value);
	return (result);
}

/**
 * set_no_collision - set hash table value in case of no collision
 * @ht: pointer to the hash table
 * @key: the unique key for the table lookup
 * @value: the value to set in the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int set_no_collision(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nptr;

	index = hash_djb2((const unsigned char *) key) % ht->size;
	nptr = ht->array[index]; /* temp pointer to element in array / list */
	nptr = malloc(sizeof(hash_node_t));
	if (nptr == NULL)
		return (0);
	nptr->key = strdup(key);
	if (nptr->key == NULL)
		return (0);
	nptr->value = strdup(value);
	if (nptr->value == NULL)
		return (0);
	nptr->next = NULL; /* dull terminate the linked list */
	ht->array[index] = nptr;  /* nptr was temp */
	return (1);
}

/**
 * set_with_collision - set hash table value in case no collision
 * @ht: pointer to the hash table
 * @key: the unique key for the table lookup
 * @value: the value to set in the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int set_with_collision(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nptr;

	index = hash_djb2((const unsigned char *) key) % ht->size;
	nptr = ht->array[index]; /* temp pointer to element in array / list */
	for (nptr = ht->array[index]; nptr != NULL; nptr = nptr->next)
	{
		if (strcmp(nptr->key, key) == 0)
		{
			free(nptr->value);
			nptr->value = strdup(value);
			return (1);
		}
	}
	/* no match value found; insert new node */
	nptr = malloc(sizeof(hash_node_t));
	if (nptr == NULL)
		return (0);
	nptr->key = strdup(key);
	if (nptr->key == NULL)
		return (0);
	nptr->value = strdup(value);
	if (nptr->value == NULL)
		return (0);
	nptr->next = ht->array[index];
	ht->array[index] = nptr;
	return (1);
}
