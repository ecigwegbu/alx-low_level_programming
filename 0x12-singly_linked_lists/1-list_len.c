/*****************************************************************************/
#include "lists.h"
/**
 * list_len - return the number of elements in a simply linked list
 *
 * @h: node pointer
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}

