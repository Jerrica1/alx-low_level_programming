#include "hash_tables.h"
/**
 * key_index - returns the index of a specific key
 * @key: key to search for
 * @size: size of hast_table_t
 * Return: returns the hashed index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	return (hash_djb2((unsigned char *)key) % size);

}
