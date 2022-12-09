#include "lists.h"

/**
 * sum_dlistint - return the sum of values of a doubly linked list
 * @head: pointer to the head node
 * Return: the sum of the values of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
