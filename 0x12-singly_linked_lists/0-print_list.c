/*****************************************************************************/
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print a list of linked nodes
 *
 * @h: node pointer
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, (h->str == NULL) ? "(nil)" : h->str);
		h = h->next;
		n++;
	}

	return (n);
}
