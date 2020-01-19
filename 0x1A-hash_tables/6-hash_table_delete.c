#include "hash_tables.h"
/**
* hash_table_delete - deletes the hash table
* @ht: pointer to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux, *delete;

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
					delete = aux;
					aux = aux->next;
					free(delete->value);
					free(delete->key);
					free(delete);
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
