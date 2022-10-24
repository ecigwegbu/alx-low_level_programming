/*****************************************************************************/
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print a list of linked nodes
 *
 * @h: node pointer
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}

