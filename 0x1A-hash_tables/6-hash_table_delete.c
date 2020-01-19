#include "hash_tables.h"
/**
* hash_table_delete - deletes the hash table
* @ht: pointer to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux;

	if (ht == NULL || ht->array == NULL)
		return;
	if (ht != NULL && ht->size != 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				aux = ht->array[i];
				while (aux)
				{
					free(aux->value);
					free(aux->key);
					free(ht->array[i]);
					aux = aux->next;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
