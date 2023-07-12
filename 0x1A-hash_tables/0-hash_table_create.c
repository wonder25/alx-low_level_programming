#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table = NULL;
	unsigned long int i;

	my_table = malloc(sizeof(hash_table_t));

	if (my_table == NULL)
	{
		return (NULL);
	}

	my_table->size = size;
	my_table->array = malloc(size * (sizeof(hash_node_t *)));

	if (my_table->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < my_table->size; i++)
		my_table->array[i] = NULL;

	return (my_table);
}
