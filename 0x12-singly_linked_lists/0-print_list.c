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
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("%s\n", "[0] (nil)");
		h = h->next;
		n++;
	}

	return (n);
}
