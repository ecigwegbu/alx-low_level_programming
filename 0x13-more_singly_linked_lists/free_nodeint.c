#ifndef _FREE_NODE_INT
#define _FREE_NODE_INT

#include "lists.h"

/**
 * free_nodeint - free a node in a singly linked list
 * @node: a pointer to a node of the list
 * Return: 0 if successful;
 */
int free_nodeint(listint_t *node)
{
	if (node == NULL)
		return (0);
	free(node);
	node = NULL;

	return (0);
}

#endif /* _FREE_NODE_INT */
