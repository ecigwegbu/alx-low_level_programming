/*****************************************************************************/
#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 *
 * @head: address of pointer to head
 * Return: pointer to the head of the reveresed list
 */
listint_t *reverse_listint(listint_t **head);
{
	unsigned int i, size;
	listint_t *temp = NULL, *tempHead = NULL;

	if (!head)	/* check for NULL pointer address */
		return (NULL);
	size = (unsigned int) listint_len(*head);   /* get the length of the list */

	temp = get_nodeint_at_index(*head, size - 1);
	tempHead = temp;
	/* for each node starting from last */
	for (i = size - 1; i >= 0; i--)
	{
		/* set temp = last  */
		temp = get_nodeint_at_index(*head, i)
		prev = get_nodeint_at_index(*head, i - 1)
		temp->next = prev;
	}
	if (idx == 0)
	{
		/* add node at the beginning */
		newNode = add_nodeint(head, n);
		return (newNode);
	}
	if (*head == NULL)	/* can't add elsewhere unless idx != 0 */
		return (NULL);

	if (idx == (size))
	{
		/* add node at end */
		newNode = add_nodeint_end(head, n);
		return (newNode);
	}
	if (idx >= 1)
	{
		/* add node in between */
		newNode = add_nodeint_idx(*head, idx, n);
		return (newNode);
	}

	return (NULL);
}


/**
 * add_nodeint_idx - adds a node at a specified index of a linked list
 * @head: pointer to the head node of the linked list
 * @idx: the index position where to add the node
 * @n: the data to insert
 * Return: pointer to the added node or NULL if fail
 */
listint_t *add_nodeint_idx(listint_t *head,
		unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode = NULL, *prevNode, *idxNode;

	/* skip ahead to index position */
	prevNode = head;
	idxNode = head;
	for (i = 0; i < idx; i++)
	{
		if (idxNode->next)
		{
			prevNode = idxNode;
			idxNode = idxNode->next;
		}
		else   /* too few nodes */
		{
			return (NULL);
		}
	}
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	prevNode->next = newNode;
	newNode->next = idxNode;

	prevNode = NULL;
	idxNode = NULL;

	return (newNode);
}

/**
 * add_nodeint - adds a node at the beginning of a simply linked list
 *
 * @head: address of the first node pointer
 * @n: the int value of the new node
 * Return: the address of the new element added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = (NULL);

	/* first check head is not NULL */
	if (!head)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp; /* de-ref to get node pointer */

	return (*head);
}

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

