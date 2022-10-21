/*****************************************************************************/
#include "lists.h"
/**
 * freeNode - free a node in a singly linked list
 * @node: a pointer to a node of the list
 * Return: 0 if successful;
 */
int freeNode(list_t *node)
{
	if (node == NULL)
		return (0);

	if (node->str)
		free(node->str); /* Is this really necessary?  */
	node->str = NULL;
	free(node);
	node = NULL;

	return (0);
}
