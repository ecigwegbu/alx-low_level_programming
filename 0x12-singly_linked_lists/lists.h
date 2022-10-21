#ifndef _ECI_LINKED_LMAIN_H
#define _ECI_LINKED_LMAIN_H
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/**
 * _putchar - print single characters to stdout
 * @c: the character to print
 * Return: the character printed
 */
int _putchar(char c);
int _strlen(char *s);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif /* _ECI_LINKED_LMAIN_H */

