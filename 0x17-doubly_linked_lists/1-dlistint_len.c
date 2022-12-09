#include "lists.h"

/**
 * dlistint_len - return the length of a doubly linked list
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
