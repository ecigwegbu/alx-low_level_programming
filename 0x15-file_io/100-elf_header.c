#include <stdio.h>
#include "main.h"

int getElfInfo(const char *elf_file);

/* Outline File - to be updated */

/**
 * main - displays the info in an ELF file
 *
 * @ac: number of arguments
 * @av: argument vector
 * Return: 0 on success, various exit codes on failure.
 */
int main(int ac, char **av)
{

	if (ac != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", av[0]);
		exit(98);
	}

	if (!getElfInfo(av[1]))
	{
		printf("Error: Not an ELF file.\n");
		exit(98);
	}

	return (0);
}


/**
 * getElfInfo - ELF print helper function
 *
 * @elf_file: pointer to filename of elf file
 *
 * Return: Always 0.
 */
int getElfInfo(const char *elf_file)
{
	(void) elf_file;  /* placeholder  */
	return (0);
}

