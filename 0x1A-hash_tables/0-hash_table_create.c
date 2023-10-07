#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 *
 * @size: The size of the array for the hash table.
 * Return: A pointer to the newly created hash table on success,
 *         or NULL if memory allocation fails.
 */
 
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_map = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!hash_map)
	{
		return (NULL);
	}
	hash_map->size = size;
	hash_map->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_map->array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hash_map->array[i] = NULL;
	}
	return (hash_map);
}
