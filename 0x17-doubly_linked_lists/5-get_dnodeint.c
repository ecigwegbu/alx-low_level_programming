#include "lists.h"

/**
 * get_dnodeint_at_index - get the node value at index for a dbly linked lst
 * @head: pointer to the head node
 * @index: zero based index location for desired node
 * Return: the node value at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	return (ptr);
}
