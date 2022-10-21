/*****************************************************************************/
#include <string.h>
#include "lists.h"
#include "_strlen.c"

/**
 * add_node_end - adds a node at the beginning of a simply linked list
 *
 * @head: address of the first node pointer
 * @str: the string value of the new node
 * Return: the number of nodes printed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode = (NULL);
	list_t *temp = NULL;
	/* first check head is not NULL */
	if (!head)
		return (NULL);
	lastNode = malloc(sizeof(list_t));
	if (!lastNode)
		return (NULL);
	lastNode->str = strdup(str);
	if (!str)
		lastNode->len = 0;
	else
		lastNode->len = _strlen(lastNode->str);
	lastNode->next = NULL;
	/* check if list is empty */
	if (*head == NULL)
	{
		*head = lastNode;
		return (*head);
	}
	/* find last node - use temp node pointer */
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	/* let last node point to lastNode */
	temp->next = lastNode;

	return (*head);
}

