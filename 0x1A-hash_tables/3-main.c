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

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "Betty", "cooler");
	hash_table_set(ht, "Petty", "coolest");
	hash_table_set(ht, "hetairas", "hetairas_value");
	hash_table_set(ht, "mentioner", "mentioner_value");
	hash_table_set(ht, "heliotropes", "heliotropes_value");
	hash_table_set(ht, "neurospora", "neurospora_value");
	hash_table_set(ht, "depravement", "depravement_value");
	hash_table_set(ht, "serafins", "serafins_value");
	hash_table_set(ht, "stylist", "stylist_value");
	hash_table_set(ht, "subgenera", "subgenera_value");
	hash_table_set(ht, "joyful", "joyful_value");
	hash_table_set(ht, "synaphea", "synaphea_value");
	hash_table_set(ht, "redescribed", "redescribed_value");
	hash_table_set(ht, "urites", "urites_value");
	hash_table_set(ht, "dram", "dram_value");
	hash_table_set(ht, "vivency", "vivency_value");

	print_ht(ht);
	return (EXIT_SUCCESS);
}
