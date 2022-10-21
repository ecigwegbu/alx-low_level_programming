/*****************************************************************************/
#include <stdio.h>  /*debug */
#include <string.h>
#include "lists.h"

/**
 * free_list - adds a node at the beginning of a simply linked list
 *
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *tempNode;  /* actually lasNode is last but 1 node */
	list_t *priorNode = NULL;  /* initialise for future use */

	if (!head)   /* sentry for null pointer edge case */
		return;

	tempNode = head;  /* actually lasNode is last but 1 node */

	while (tempNode)
	{
		/* get last node */
		priorNode = getLastNode(tempNode);

		if (priorNode == NULL)
		{
			freeNode(head);
			return;
		}

		/* free last node */
		freeNode(priorNode);

		tempNode = head;
	}
}

/**
 * getLastNode - get the last but one node of a singly linked list
 * @node: a pointer to a node of the list
 * Return: pointer to the last but one node, or NULL if head is the last node
 */
list_t *getLastNode(list_t *node)
{
	list_t *priorNode = NULL;

	if (node == NULL)
		exit(1);

	while (node->next)
	{
		priorNode = node;
		node = node->next;
	}

	return (priorNode);
}

/**
 * freeNode - free a node in singly linked list
 * @priorNode: a pointer to a node of the list
 * Return: 0 if successful;
 */
int freeNode(list_t *priorNode)
{
	list_t *lastNode = NULL;

	if (priorNode == NULL)
		exit(2);

	lastNode = priorNode->next;

	free(lastNode->str);
	lastNode->str = NULL;
	free(lastNode);
	lastNode = NULL;

	return (0);
}
