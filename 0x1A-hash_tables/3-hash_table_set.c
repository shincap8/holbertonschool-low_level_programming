#include "hash_tables.h"
/**
* hash_table_set - Adds an element to hash-table
* @ht: pointer to hash table
* @key: key of the value
* @value: value paired with the key
* Return: returns a 1 if succeed otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned int i = 0;
	hash_node_t *new_node, *aux;

	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		aux = ht->array[index];
		while (aux)
		{
			if (strcmp(key, (const char *)aux->key) == 0)
			{
				free(aux->value);
				aux->value = strdup(value);
				return (1);
			}
			else
			{
				aux = aux->next;
				i++;
			}
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
