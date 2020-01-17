#include "hash_tables.h"
/**
* key_index - This function creates the key index
* @key: key of the value
* @size: number given
* Return: returns a pointer to the new hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}