#include "lists.h"

size_t _dlistint_len(const dlistint_t *h);
dlistint_t *_get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * delete_dnodeint_at_index - delete a node at index in a dbly lked list
 * @head: address of pointer to the head node
 * @index: zero based index location for deleted node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *idxnode;
	unsigned int len;

	if (head == NULL)
		return (-1);
	if (*head == NULL)	/* empty list case */
		return (-1);
	len = (unsigned int) _dlistint_len(*head);
	if (index == 0)   /* deleting at the beginning */
	{
		if ((*head)->next)	/* not the only node */
		{
			tmp = (*head);
			(*head) = (*head)->next;
			free(tmp);
			(*head)->prev = NULL;
		}
		else	/* single node case */
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	idxnode = _get_dnodeint_at_index(*head, index); /* get node at index */
	if (idxnode == NULL)	/* invalid index */
		return (-1);
	if (index == len - 1)   /* deleting at the end */
	{
		idxnode->prev->next = NULL;
		free(idxnode);
		return (1);
	}
	idxnode->prev->next = idxnode->next; /* link idxnode prev and next */
	idxnode->next->prev = idxnode->prev;
	free(idxnode);
	return (1);
}

/**
 * _dlistint_len - return the length of a doubly linked list
 * @h: pointer to the head node
 * Return: the number of nodes
 */
size_t _dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}

/**
 * _get_dnodeint_at_index - get the node value at index for a dbly linked lst
 * @head: pointer to the head node
 * @index: zero based index location for desired node
 * Return: the node value at index
 */
dlistint_t *_get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
