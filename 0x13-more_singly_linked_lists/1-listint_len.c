#include <stdio.h>
#include "lists.h"
/**
 * listint_len - get len of list
 * Return: size_t
 * @h: list
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
