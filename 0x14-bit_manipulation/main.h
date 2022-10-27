#ifndef _ECI_BITMAN_H
#define _ECI_BITMAN_H
#include <stdlib.h>

/**
 * _putchar - print single characters to stdout
 * @c: the character to print
 * Return: the character printed
 */
int _putchar(char c);
int _strlen(char *s);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);


#endif /*_ECI_MORE_LINKED_LMAIN_H */

