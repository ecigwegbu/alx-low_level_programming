/*****************************************************************************/
#include <string.h>
#include "lists.h"
#include "_strlen.c"

/**
 * add_node - adds a node at the beginning of a simply linked list
 *
 * @head: address of the first node pointer
 * @str: the string value of the new node
 * Return: the number of nodes printed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = (NULL);

	/* first check head is not NULL */
	if (!head)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = _strlen(temp->str);
	temp->next = *head;
	*head = temp; /* de-ref to get node pointer */

	return (*head);
}

