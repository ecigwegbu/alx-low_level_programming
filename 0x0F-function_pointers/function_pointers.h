#ifndef _ECI_FUNCTION_POINTERS_H
#define _ECI_FUNCTION_POINTERS_H

void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));

#endif
