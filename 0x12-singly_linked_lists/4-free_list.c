/*****************************************************************************/
#include <string.h>
#include "lists.h"

/**
 * free_list - adds a node at the beginning of a simply linked list
 *
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	int i;

	list_t *lastNode = head;
	/* while (lastNode)  */
	/* for (i = 0; i < 2; i++) */
	{
		/* get last node */
		lastNode = getLastNode(head);

		/* free last node */
		freeNode (lastNode);

		lastNode = head;
	}
	exit(1);
}


list_t *getLastNode(list_t *node)
{
	while (node->next)
	{
		node = node->next;
	}	

	return (node);
}

list_t *freeNode(list_t *node)
{
	free(node->str);
	node->str = NULL;
	free(node);
	node = NULL;

	return (node);
}
