#include "hash_tables.h"
/**
* hash_table_print - print the hash table
* @ht: pointer to hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int lists = 0, count = 0;
	hash_node_t *aux;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if(ht->array[i] != NULL)
				lists++;
		}
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				aux = ht->array[i];
				while (aux)
				{
					printf("'%s': '%s'", aux->key, aux->value);
					count++;

					if(aux->next != NULL)
						printf(", ");
					aux = aux->next;
				}
				if (count < lists)
					printf(", ");
			}
		}
		printf("}\n");
	}	
}
