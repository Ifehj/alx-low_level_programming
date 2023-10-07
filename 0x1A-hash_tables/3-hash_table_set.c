#include "hash_tables.h"
/**
 * create_node - creates a new node
 *
 * @key: Key character
 * @value: The value associated with the key
 *
 * Return: Pointer to the new node or NULL if it fails.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}

/**
 * hash_table_set - inserts a node into the hash table
 * @key: key character
 * @value: value pair of the key
 *
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new_node;
	char *value_copy;

	if (ht == NULL || key == NULL || value == NULL || ht->size == 0 || *key == '\0')
	{
		return (0);
	}
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
