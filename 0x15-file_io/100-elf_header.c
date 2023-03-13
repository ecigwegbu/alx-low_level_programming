#include <stdio.h>
#include "main.h"

int getElfInfo(const char *elf_file);
char *os_abi(char os, char *os_text);
char *os_abi2(char os, char *os_text);
char *e_type(char type_code, char *type_text);

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
	int fd, read_count, byte;
	Elf_hdr_t hdr;
	char os_text[32], type_text[64];

/*        unsigned char e_ident[EI_NIDENT]; */
/*       uint16_t      e_type;  2 bytes*/
/*       uint16_t      e_machine; 2 bytes*/
/*        uint32_t      e_version; 4 bytes */
/*        ElfN_Addr     e_entry;  sizeof(void *) bytes*/

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

	/* open ELF file for reading */
	fd = open(av[1],  O_RDONLY);
	if (fd == -1)
	{
		perror(av[0]);
		exit(98);
	}

	/* read the variables */
	/* ssize_t read(int fd, void *buf, size_t count); */
	read_count = read(fd, hdr.e_ident, 16);

	if (read_count < 4 ||
		hdr.e_ident[0] != 0x7f ||
		hdr.e_ident[1] != 'E' ||
		hdr.e_ident[2] != 'L' ||
		hdr.e_ident[3] != 'F')
	{
		printf("Error: Not an ELF file.\n");
		exit(98);
	}

/*        unsigned char e_ident[EI_NIDENT]; */
/*       uint16_t      e_type;  2 bytes*/
/*       uint16_t      e_machine; 2 bytes*/
/*        uint32_t      e_version; 4 bytes */
/*        ElfN_Addr     e_entry;  sizeof(void *) bytes*/
	read(fd, &hdr.e_type, 2);
	read(fd, &hdr.e_machine, 2);
	read(fd, &hdr.e_version, 4);
	read(fd, &hdr.e_entry, sizeof(void *));
	close(fd);

	printf("ELF Header:\n");
	printf("Magic:  ");
	for (byte = 0; byte < 16; byte++)
		printf(" %02x", hdr.e_ident[byte]);
	printf("\n");
	printf("Class:                             ELF");
	printf("%d\n", hdr.e_ident[4] == 1 ? 32 : 64);
	printf("Data:                              2's complement, ");
	printf("%s endian\n", hdr.e_ident[5] == 1 ? "little" : "big");
	printf("Version:                           1 (current)\n");
	printf("OS/ABI:                            ");
	printf("%s\n", os_abi(hdr.e_ident[7], os_text));
	printf("ABI Version:                       ");
	printf("%d\n", hdr.e_ident[7] == 0 ? 0 : 1);
	printf("Type:                              ");
	printf("%s\n", e_type(hdr.e_type, type_text));
	printf("Entry point address:               %p\n", hdr.e_entry);
	/* printf("??????\n");  insert result of function call */
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
	return (1);
}


/**
 * os_abi - OS_ABI value lookup
 * @os: os_abi code
 * @os_text: pointer to the os_abi string
 * Return: pointer to the os_abi string
 */

char *os_abi(char os, char *os_text)
{
	switch (os)
	{
		case 0:
			strcpy(os_text, "UNIX - System V");
			break;
		case 1:
			strcpy(os_text, "HP-UX");
			break;
		case 2:
			strcpy(os_text, "NetBSD");
			break;
		case 3:
			strcpy(os_text, "Linux");
			break;
		case 4:
			strcpy(os_text, "GNU Hurd");
			break;
		case 6:
			strcpy(os_text, "Solaris");
			break;
		case 7:
			strcpy(os_text, "AIX (Monterey)");
			break;
		case 8:
			strcpy(os_text, "IRIX");
			break;
		case 9:
			strcpy(os_text, "FreeBSD");
			break;
	}
	os_abi2(os, os_text);
	return (os_text);
}

/**
 * os_abi2 - OS_ABI value lookup
 * @os: os_abi code
 * @os_text: pointer to the os_abi string
 * Return: pointer to the os_abi string
 */

char *os_abi2(char os, char *os_text)
{
	switch (os)
	{
		case 10:
			strcpy(os_text, "Tru64");
			break;
		case 11:
			strcpy(os_text, "Novell Modesto");
			break;
		case 12:
			strcpy(os_text, "OpenBSD");
			break;
		case 13:
			strcpy(os_text, "OpenVMS");
			break;
		case 14:
			strcpy(os_text, "NonStop Kernel");
			break;
		case 15:
			strcpy(os_text, "AROS");
			break;
		case 16:
			strcpy(os_text, "FenixOS");
			break;
		case 17:
			strcpy(os_text, "Nuxi CloudABI");
			break;
		case 18:
			strcpy(os_text, "Stratus technologies OpenVOS");
	}
	return (os_text);
}



/**
 * e_type - type
 * @type_code: type code
 * @type_text: pointer to the type_text string
 * Return: pointer to the type_text string
 */

char *e_type(char type_code, char *type_text)
{
	switch (type_code)
	{
		case 0x00:
			strcpy(type_text, "Unknown");
			break;
		case 0x01:
			strcpy(type_text, "Relocatable file");
			break;
		case 0x02:
			strcpy(type_text, "Executable file");
			break;
		case 0x03:
			strcpy(type_text, "Shared Object");
			break;
		case 0x04:
			strcpy(type_text, "Core file");
			break;
		default:
			strcpy(type_text, "Reserved");
	}
	return (type_text);
}
