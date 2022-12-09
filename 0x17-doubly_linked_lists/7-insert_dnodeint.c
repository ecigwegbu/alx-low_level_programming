#include "lists.h"

size_t _dlistint_len(const dlistint_t *h);
dlistint_t *_get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * insert_dnodeint_at_index - insert node at index in a dbly lked list
 * @h: address of pointer to the head node
 * @idx: zero based index location for inserted node
 * @n: the data value to be inserted
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *idxnode;
	unsigned int len;

	/* NULL checks */
	if (h == NULL)
		return (NULL);

	/* get node at index */
	idxnode = _get_dnodeint_at_index(*h, idx);

	if (idxnode == NULL)	/* invalid index */
		return (NULL);

	/* get list length -> len */
	/* size_t _dlistint_len(const dlistint_t *h); */
	len = (unsigned int) _dlistint_len(*h);

	if (idx == 0)   /* inserting at the beginning */
		return (add_dnodeint(h, n));

	if (idx == len)   /* inserting at the end */
		return (add_dnodeint_end(h, n));

	/* malloc new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* fill in the data */
	new->n = n;

	/* attach new node to idx node and its prev*/
	new->next = idxnode;
	new->prev = idxnode->prev;
	new->prev->next = new;
	idxnode->prev = new;

	return (new);
}

#include "lists.h"

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
