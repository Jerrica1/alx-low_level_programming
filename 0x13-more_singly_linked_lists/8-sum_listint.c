#include "lists.h"

/**
 * sum_listint - function with one argument
 * @head: pointer to first node of linked list
 *
 * Description: returns the sum of all the data(n)
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
