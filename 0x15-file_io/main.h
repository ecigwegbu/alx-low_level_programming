#ifndef _ECI_FILEIO_H
#define _ECI_FILEIO_H
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <elf.h>


/**
 * _putchar - print single characters to stdout
 * @c: the character to print
 * Return: the character printed
 */
int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* task 3 functions */
int getInputFd(const char *filename);
int getOutputFd(const char *filename);
ssize_t doCopy(int fd1, int fd2);

/* for the advanced */
/* #define EI_NIDENT 16 */


/**
 * struct Elf_hdr_s - ELF struct
 * @e_ident: ident array
 * @e_type: type
 * @e_machine: machine
 * @e_version: version
 * @e_entry: entry
 *
 * Description: ELF header structure
 */

typedef struct Elf_hdr_s
{
	unsigned char e_ident[EI_NIDENT];  /* 16 bytes */
	uint16_t      e_type;   /* 2 bytes */
	uint16_t      e_machine; /* 2 bytes */
	uint32_t      e_version; /* 4 bytes */
	/* uint64_t      e_entry;    4 or 8 bytes */
	void          *e_entry;
	/*Elf64_Addr     e_entry;*/
} Elf_hdr_t;



#endif /* _ECI_FILEIO_H */
