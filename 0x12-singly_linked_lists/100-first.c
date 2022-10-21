#include <stdio.h>
#include "lists.h"
/**
 * myConstructor - executes before main
 *
 */
__attribute__ ((constructor))
void myConstructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

