#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: Size of the hash table
 * 
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Table;
	unsigned long int i;

	Table = malloc(sizeof(hash_table_t));
	if (Table == NULL)
		return (NULL);
	Table->size = size;
	Table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(Table);
		return (NULL);
	}
	for(i = 0; i < size; i++)
	{
		Table->array[i] = NULL;
	}

	return (Table);
}
