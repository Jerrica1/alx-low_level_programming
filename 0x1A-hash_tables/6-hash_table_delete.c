#include "hash_tables.h"

/**
 * free_list - frees a linked list
 * @head: hash_node_t list to be freed
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}

/**
 * hash_table_delete - deletes a hash table
