#ifndef _ECI_LINKED_LMAIN_H
#define _ECI_LINKED_LMAIN_H
#include <stdlib.h>

typedef struct list_t list_t;

struct list_t
{
	char *str;
	int len;
	list_t *next;
};

size_t print_list(const list_t *h);

#endif /* _ECI_LINKED_LMAIN_H */

