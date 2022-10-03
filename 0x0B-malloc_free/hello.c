#include <stdio.h>

int main(void)
{ 
	int a __attribute__((unused));
    	int aUnused __attribute__((unused));
	static int aStatic =0;

	printf("Hello World!\n");

   	 aStatic++;

	return (0);
}

