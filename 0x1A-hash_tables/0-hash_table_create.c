#include "hash_tables.h"
/**
* hash_table_create - This function creates a hash table
* @size: number given
* Return: returns a pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(8, size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
