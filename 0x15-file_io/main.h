#ifndef _ECI_FILEIO_H
#define _ECI_FILEIO_H
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>


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



#endif /* _ECI_FILEIO_H */
