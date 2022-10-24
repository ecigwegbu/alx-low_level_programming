/*****************************************************************************/
#include "lists.h"

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

