#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: Hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temporal = NULL;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temporal = ht->array[i];
		while (temporal)
		{
			aux = temporal;
			temporal = aux->next;
			free(aux->value);
			free(aux->key);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
