/*****************************************************************************/
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a given index posn in linked list
 *
 * @head: address of pointer to head
 * @index: the index position to delete, 0 based
 * Return: 1 if success
 * return: -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode = NULL, *idxNode = NULL, *nextNode = NULL;

	if (!head)	/* check for NULL pointer address */
		return (-1);

	if (*head == NULL)	/* nothing to delete */
		return (1);

	/* get handles */
	prevNode = get_nodeint_at_index(*head, index - 1);
	idxNode = get_nodeint_at_index(*head, index);
	nextNode = get_nodeint_at_index(*head, index + 1);

	if (prevNode)
	{
		prevNode->next = nextNode;
	}
	if (*head == idxNode)
		*head = nextNode;
	free(idxNode);
	return (1);
}

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

