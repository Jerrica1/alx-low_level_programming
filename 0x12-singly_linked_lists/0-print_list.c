#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: list to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int n; /* number of nodes */

	n = 0;
	while (current != NULL)
	{
		printf("[%i] %s\n", current->len, current->str);
		current = current->next;
		n++;
	}

	return (n);
}
