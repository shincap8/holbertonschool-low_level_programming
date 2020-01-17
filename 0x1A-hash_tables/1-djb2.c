#include "hash_tables.h"
/**
* hash_djb2 - This function is a hash function
* @str: number given
* Return: returns a hash code
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
		printf("%s\n", str);
	}
	return (hash);
}