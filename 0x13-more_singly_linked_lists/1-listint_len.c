/*****************************************************************************/
#include "lists.h"
/**
 * listint_len - return the number of elements in a singly linked list
 *
 * @h: node pointer
 * Return: the number of elements in the node
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

