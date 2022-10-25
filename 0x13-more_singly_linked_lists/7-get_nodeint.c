/*****************************************************************************/
#include "lists.h"
/**
 * get_nodeint_at_index - return the node at a given index in a linked list
 *
 * @head: node pointer to the head
 * @index: the index position to find, 0-based.
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (!head)
		return (NULL);

	for (n = 0; n < index; n++)
	{
		if (head->next)
		{
			head = head->next;
		}
		else
			return (NULL);
	}

	return (head);
}

