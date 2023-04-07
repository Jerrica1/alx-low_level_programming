#include "hash_tables.h"

/**
 * hash_table_set - implementation of the djb2 algorithm
 * @ht: hash table pointer
 * @key: key assign to hash node
 * @value: value assign to this key
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *old_node, *temp;

	if (!ht || strcmp(key, "") == 0 || !key || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!new_node->key)
		return (0);
	new_node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (!new_node->value)
		return (0);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	if (!ht->array[index])
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1); }
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			break;
		temp = temp->next; }
	if (temp)
	{
		free(temp->value);
		temp->value = malloc(sizeof(char) * (strlen(value) + 1));
		if (!temp->value)
			return (0);
		strcpy(temp->value, value);
		return (1); }
	old_node = ht->array[index];
	new_node->next = old_node;
	ht->array[index] = new_node;
	return (1);
}
