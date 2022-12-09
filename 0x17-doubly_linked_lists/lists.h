#ifndef _0x17C_DOUBLE_H
#define _0x17C_DOUBLE_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFSIZE 1025
#define BUFFLEN (BUFFSIZE - 1)

extern char **environ;

typedef struct stat stat_t;

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* team library functions */
size_t _strlen(const char *s);
char *_strncat(char *dest, const char *src, int n);
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, int n);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *str);
int _strtoi(const char *str, int *error);
char *_itostr(int n);
char **splitLine(char **cmdLine, char ***args);
ssize_t _getline(char **lineptr, size_t *n, int fd);
char **parseLine(char *str, char *delim, int *jobNr);
int getCmdPath(char **args, char *pathnamei, int *jobNr);
char *_getenv(const char *name);
int execCmd(char **args, char *shell, int *jobNr, int *lastError);
char *remCmnt(char *cmdLine);
void shellErr(int code);
int ssInteractive(int ac, char **av);
int ssBatch(int ac, char **av);
int execJob(char *cmdLine, char **argv, int *jobNr, int *lastError);
int execBuiltin(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
void ssExit(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
int cdHandler(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
int envHandler(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
int varHandler(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
int setenvHandler(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
int _setenv(const char *name, const char *value, int overwrite);
int unsetenvHandler(char **args, char *cmdLine, char **cmdsVector,
	char *cmd, char *shell, int *jobNr, int *lastError);
int _unsetenv(const char *name);
int printEnv(void);
void freeEnv(char **environ);
int is_palindrome_num(int num);

size_t print_dlistint(const dlistint_t *h); 

#endif /*_0x17C_DOUBLE_H*/
