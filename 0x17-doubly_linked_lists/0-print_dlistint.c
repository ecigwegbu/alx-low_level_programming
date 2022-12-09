#include "lists.h"

/**
 * print_dlistint - print the elements of a doubly linked list
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t nprt = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		nprt++;
	}

	return (nprt);
}
