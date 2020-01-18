#include "hash_tables.h"
/**
* hash_table_get - Retrieves a value associated with a key
* @ht: pointer to hash table
* @key: key of the value
* @value: value paired with the key
* Return: returns a 1 if succeed otherwise 0
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *aux;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			aux = ht->array[i];
			while (aux)
			{
				if(strcmp(key, (const char*)aux->key) == 0)
					return (aux->value);
				aux = aux->next;
			}
		}
	}
	return (NULL);
}
